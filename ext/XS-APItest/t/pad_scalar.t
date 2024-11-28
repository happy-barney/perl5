use warnings;
use strict;

use Test::More tests => 76;

use XS::APItest qw (
    PAD_FINDMY_FOO
    PAD_FINDMY_PV
    PAD_FINDMY_PVN
    PAD_FINDMY_SV
    pad_scalar
);

is pad_scalar (PAD_FINDMY_SV,  "foo"), "NOT_IN_PAD";
is pad_scalar (PAD_FINDMY_PVN, "foo"), "NOT_IN_PAD";
is pad_scalar (PAD_FINDMY_PV,  "foo"), "NOT_IN_PAD";
is pad_scalar (PAD_FINDMY_FOO, "foo"), "NOT_IN_PAD";
is pad_scalar (PAD_FINDMY_SV,  "bar"), "NOT_IN_PAD";
is pad_scalar (PAD_FINDMY_PVN, "bar"), "NOT_IN_PAD";
is pad_scalar (PAD_FINDMY_PV,  "bar"), "NOT_IN_PAD";

our $foo = "wibble";
my $bar = "wobble";
is pad_scalar (PAD_FINDMY_SV,  "foo"), "NOT_MY";
is pad_scalar (PAD_FINDMY_PVN, "foo"), "NOT_MY";
is pad_scalar (PAD_FINDMY_PV,  "foo"), "NOT_MY";
is pad_scalar (PAD_FINDMY_FOO, "foo"), "NOT_MY";
is pad_scalar (PAD_FINDMY_SV,  "bar"), "wobble";
is pad_scalar (PAD_FINDMY_PVN, "bar"), "wobble";
is pad_scalar (PAD_FINDMY_PV,  "bar"), "wobble";

sub aa($);
sub aa($) {
    my $xyz;
    ok \pad_scalar (PAD_FINDMY_SV,  "xyz") == \$xyz;
    ok \pad_scalar (PAD_FINDMY_PVN, "xyz") == \$xyz;
    ok \pad_scalar (PAD_FINDMY_PV,  "xyz") == \$xyz;
    aa(0) if $_[0];
    ok \pad_scalar (PAD_FINDMY_SV,  "xyz") == \$xyz;
    ok \pad_scalar (PAD_FINDMY_PVN, "xyz") == \$xyz;
    ok \pad_scalar (PAD_FINDMY_PV,  "xyz") == \$xyz;
    is pad_scalar (PAD_FINDMY_SV,  "bar"), "wobble";
    is pad_scalar (PAD_FINDMY_PVN, "bar"), "wobble";
    is pad_scalar (PAD_FINDMY_PV,  "bar"), "wobble";
}
aa(1);

sub bb() {
    my $counter = 0;
    my $foo = \$counter;
    return sub {
	ok pad_scalar (PAD_FINDMY_SV,  "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
	ok pad_scalar (PAD_FINDMY_PVN, "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
	ok pad_scalar (PAD_FINDMY_PV,  "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
	ok pad_scalar (PAD_FINDMY_FOO, "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
	if(pad_scalar (PAD_FINDMY_SV,  "counter") % 3 == 0) {
	    return pad_scalar (PAD_FINDMY_SV,  "counter")++;
	} elsif(pad_scalar (PAD_FINDMY_SV,  "counter") % 3 == 0) {
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

is pad_scalar (PAD_FINDMY_SV,  "foo"), "NOT_MY";
is pad_scalar (PAD_FINDMY_PVN, "foo"), "NOT_MY";
is pad_scalar (PAD_FINDMY_PV,  "foo"), "NOT_MY";
is pad_scalar (PAD_FINDMY_FOO, "foo"), "NOT_MY";

1;
