use warnings;
use strict;

use Test::More tests => 73;

use XS::APItest qw (
    PAD_FINDMY_FOO
    PAD_FINDMY_PV
    PAD_FINDMY_PVN
    PAD_FINDMY_SV
    pad_scalar
);

is pad_scalar (PAD_FINDMY_SV,  "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN, "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,  "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_findmy_pv ());
is pad_scalar (PAD_FINDMY_FOO, "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_findmy_pvs ());

is pad_scalar (PAD_FINDMY_SV,  "bar"), "NOT_IN_PAD", q (undeclared '$bar'; using pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN, "bar"), "NOT_IN_PAD", q (undeclared '$bar'; using pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,  "bar"), "NOT_IN_PAD", q (undeclared '$bar'; using pad_findmy_pv ());

our $foo = "wibble";
my $bar = "wobble";
is pad_scalar (PAD_FINDMY_SV,  "foo"), "NOT_MY", q ('our $foo'; pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN, "foo"), "NOT_MY", q ('our $foo'; pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,  "foo"), "NOT_MY", q ('our $foo'; pad_findmy_pv ());
is pad_scalar (PAD_FINDMY_FOO, "foo"), "NOT_MY", q ('our $foo'; pad_findmy_pvs ());

is pad_scalar (PAD_FINDMY_SV,  "bar"), "wobble", q ('my $bar'; pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN, "bar"), "wobble", q ('my $bar'; pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,  "bar"), "wobble", q ('my $bar'; pad_findmy_pv ());

sub aa($);
sub aa($) {
    my $xyz;
    my $prefix = $_[0]
        ? ''
        : '(recursive call) '
        ;

    ok \pad_scalar (PAD_FINDMY_SV,  "xyz") == \$xyz, $prefix . q (private variable; pad_findmy_sv ());
    ok \pad_scalar (PAD_FINDMY_PVN, "xyz") == \$xyz, $prefix . q (private variable; pad_findmy_pvn ());
    ok \pad_scalar (PAD_FINDMY_PV,  "xyz") == \$xyz, $prefix . q (private variable; pad_findmy_pv ());

    if ($_[0]) {
        aa(0); # recursive call
        ok \pad_scalar (PAD_FINDMY_SV,  "xyz") == \$xyz, q (private variable (after recursive call); pad_findmy_sv ());
        ok \pad_scalar (PAD_FINDMY_PVN, "xyz") == \$xyz, q (private variable (after recursive call); pad_findmy_pvn ());
        ok \pad_scalar (PAD_FINDMY_PV,  "xyz") == \$xyz, q (private variable (after recursive call); pad_findmy_pv ());
    }

    is pad_scalar (PAD_FINDMY_SV,  "bar"), "wobble", $prefix . q (Global 'my $bar'; pad_findmy_sv ());
    is pad_scalar (PAD_FINDMY_PVN, "bar"), "wobble", $prefix . q (Global 'my $bar'; pad_findmy_pvn ());
    is pad_scalar (PAD_FINDMY_PV,  "bar"), "wobble", $prefix . q (Global 'my $bar'; pad_findmy_pv ());
}

aa(1);

sub bb() {
    my $counter = 0;
    my $foo = \$counter;
    return sub {
	ok pad_scalar (PAD_FINDMY_SV,  "foo") == \pad_scalar (PAD_FINDMY_SV, "counter");
	ok pad_scalar (PAD_FINDMY_PVN, "foo") == \pad_scalar (PAD_FINDMY_SV, "counter");
	ok pad_scalar (PAD_FINDMY_PV,  "foo") == \pad_scalar (PAD_FINDMY_SV, "counter");
	ok pad_scalar (PAD_FINDMY_FOO, "foo") == \pad_scalar (PAD_FINDMY_SV, "counter");
	if(pad_scalar (PAD_FINDMY_SV,  "counter") % 3 == 0) {
	    return pad_scalar (PAD_FINDMY_SV,  "counter")++;
	} elsif(pad_scalar (PAD_FINDMY_SV,  "counter") % 3 == 1) {
	    return pad_scalar (PAD_FINDMY_PVN, "counter")++;
	} else {
	    return pad_scalar (PAD_FINDMY_PV,  "counter")++;
	}
    };
}
my $a = bb();
my $b = bb();
is $a->(), 0;
is $a->(), 1;
is $a->(), 2;
is $a->(), 3;
is $b->(), 0;
is $b->(), 1;
is $a->(), 4;
is $b->(), 2;

is pad_scalar (PAD_FINDMY_SV,  "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN, "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,  "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_findmy_pv ());
is pad_scalar (PAD_FINDMY_FOO, "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_findmy_pvs ());

1;
