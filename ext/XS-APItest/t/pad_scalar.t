use warnings;
use strict;

use Test::More tests => 139;

use XS::APItest qw (
    PAD_FINDMY_FOO
    PAD_FINDMY_PV
    PAD_FINDMY_PVN
    PAD_FINDMY_SV
    PAD_FIND_MY_SYMBOL_FOO
    PAD_FIND_MY_SYMBOL_PV
    PAD_FIND_MY_SYMBOL_PVN
    PAD_FIND_MY_SYMBOL_SV
    pad_scalar
);

is pad_scalar (PAD_FINDMY_SV,          "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN,         "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,          "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_findmy_pv ());
is pad_scalar (PAD_FINDMY_FOO,         "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_findmy_pvs ());
is pad_scalar (PAD_FIND_MY_SYMBOL_FOO, "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_find_my_symbol_pvs ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PV,  "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_find_my_symbol_pv ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_find_my_symbol_pvn ());
is pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "foo"), "NOT_IN_PAD", q (undeclared '$foo'; pad_find_my_symbol_sv ());

is pad_scalar (PAD_FINDMY_SV,          "bar"), "NOT_IN_PAD", q (undeclared '$bar'; pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN,         "bar"), "NOT_IN_PAD", q (undeclared '$bar'; pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,          "bar"), "NOT_IN_PAD", q (undeclared '$bar'; pad_findmy_pv ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PV,  "bar"), "NOT_IN_PAD", q (undeclared '$bar'; pad_find_my_symbol_pv ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "bar"), "NOT_IN_PAD", q (undeclared '$bar'; pad_find_my_symbol_pvn ());
is pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "bar"), "NOT_IN_PAD", q (undeclared '$bar'; pad_find_my_symbol_sv ());

our $foo = "wibble";
my $bar = "wobble";
is pad_scalar (PAD_FINDMY_SV,          "foo"), "NOT_MY", q ('our $foo'; pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN,         "foo"), "NOT_MY", q ('our $foo'; pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,          "foo"), "NOT_MY", q ('our $foo'; pad_findmy_pv ());
is pad_scalar (PAD_FINDMY_FOO,         "foo"), "NOT_MY", q ('our $foo'; pad_findmy_pvs ());
is pad_scalar (PAD_FIND_MY_SYMBOL_FOO, "foo"), "NOT_MY", q ('our $foo'; pad_find_my_symbol_pvs ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PV,  "foo"), "NOT_MY", q ('our $foo'; pad_find_my_symbol_pv ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "foo"), "NOT_MY", q ('our $foo'; pad_find_my_symbol_pvn ());
is pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "foo"), "NOT_MY", q ('our $foo'; pad_find_my_symbol_sv ());

is pad_scalar (PAD_FINDMY_SV,          "bar"), "wobble", q ('my $bar'; pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN,         "bar"), "wobble", q ('my $bar'; pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,          "bar"), "wobble", q ('my $bar'; pad_findmy_pv ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PV,  "bar"), "wobble", q ('my $bar'; pad_find_my_symbol_pv ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "bar"), "wobble", q ('my $bar'; pad_find_my_symbol_pvn ());
is pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "bar"), "wobble", q ('my $bar'; pad_find_my_symbol_sv ());

sub aa($);
sub aa($) {
    my $xyz;
    my $prefix = $_[0]
        ? ''
        : '(recursive call) '
        ;

    ok \pad_scalar (PAD_FINDMY_SV,          "xyz") == \$xyz, $prefix . q (private variable; pad_findmy_sv ());
    ok \pad_scalar (PAD_FINDMY_PVN,         "xyz") == \$xyz, $prefix . q (private variable; pad_findmy_pvn ());
    ok \pad_scalar (PAD_FINDMY_PV,          "xyz") == \$xyz, $prefix . q (private variable; pad_findmy_pv ());
    ok \pad_scalar (PAD_FIND_MY_SYMBOL_PV,  "xyz") == \$xyz, $prefix . q (private variable; pad_find_my_symbol_pv ());
    ok \pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "xyz") == \$xyz, $prefix . q (private variable; pad_find_my_symbol_pvn ());
    ok \pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "xyz") == \$xyz, $prefix . q (private variable; pad_find_my_symbol_sv ());

    if ($_[0]) {
        aa(0); # recursive call
        ok \pad_scalar (PAD_FINDMY_SV,          "xyz") == \$xyz, q (private variable (after recursive call); pad_findmy_sv ());
        ok \pad_scalar (PAD_FINDMY_PVN,         "xyz") == \$xyz, q (private variable (after recursive call); pad_findmy_pvn ());
        ok \pad_scalar (PAD_FINDMY_PV,          "xyz") == \$xyz, q (private variable (after recursive call); pad_findmy_pv ());
        ok \pad_scalar (PAD_FIND_MY_SYMBOL_PV,  "xyz") == \$xyz, q (private variable (after recursive call); pad_find_my_symbol_pv ());
        ok \pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "xyz") == \$xyz, q (private variable (after recursive call); pad_find_my_symbol_pvn ());
        ok \pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "xyz") == \$xyz, q (private variable (after recursive call); pad_find_my_symbol_sv ());
    }

    is pad_scalar (PAD_FINDMY_SV,          "bar"), "wobble", $prefix . q (Global 'my $bar'; pad_findmy_sv ());
    is pad_scalar (PAD_FINDMY_PVN,         "bar"), "wobble", $prefix . q (Global 'my $bar'; pad_findmy_pvn ());
    is pad_scalar (PAD_FINDMY_PV,          "bar"), "wobble", $prefix . q (Global 'my $bar'; pad_findmy_pv ());
    is pad_scalar (PAD_FIND_MY_SYMBOL_PV,  "bar"), "wobble", $prefix . q (Global 'my $bar'; pad_find_my_symbol_pv ());
    is pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "bar"), "wobble", $prefix . q (Global 'my $bar'; pad_find_my_symbol_pvn ());
    is pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "bar"), "wobble", $prefix . q (Global 'my $bar'; pad_find_my_symbol_sv ());
}

aa(1);

my $all_increment_called = 0;

sub bb() {
    my $counter = 0;
    my $foo = \$counter;
    return sub {
        ok pad_scalar (PAD_FINDMY_SV,          "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
        ok pad_scalar (PAD_FINDMY_PVN,         "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
        ok pad_scalar (PAD_FINDMY_PV,          "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
        ok pad_scalar (PAD_FINDMY_FOO,         "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
        ok pad_scalar (PAD_FIND_MY_SYMBOL_PV,  "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
        ok pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");
        ok pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "foo") == \pad_scalar(PAD_FINDMY_SV, "counter");

        my $modulus = pad_scalar (PAD_FINDMY_SV, "counter") % 6;

        return pad_scalar (PAD_FINDMY_SV,  "counter")++
            if $modulus == 0;

        return pad_scalar (PAD_FINDMY_PVN, "counter")++
            if $modulus == 1;

        return pad_scalar (PAD_FINDMY_PV,  "counter")++
            if $modulus == 2;

        return pad_scalar (PAD_FIND_MY_SYMBOL_PV, "counter")++
            if $modulus == 3;

        return pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "counter")++
            if $modulus == 4;

        $all_increment_called = 1;
        return pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "counter")++;
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
is $a->(), 5;

ok $all_increment_called, q (all pad scalar methods called for increment);

is pad_scalar (PAD_FINDMY_SV,          "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_findmy_sv ());
is pad_scalar (PAD_FINDMY_PVN,         "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_findmy_pvn ());
is pad_scalar (PAD_FINDMY_PV,          "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_findmy_pv ());
is pad_scalar (PAD_FINDMY_FOO,         "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_findmy_pvs ());
is pad_scalar (PAD_FIND_MY_SYMBOL_FOO, "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_find_my_symbol_pvs ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PV,  "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_find_my_symbol_pv ());
is pad_scalar (PAD_FIND_MY_SYMBOL_PVN, "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_find_my_symbol_pvn ());
is pad_scalar (PAD_FIND_MY_SYMBOL_SV,  "foo"), "NOT_MY", q ('my $foo' still undeclared; pad_find_my_symbol_sv ());

1;
