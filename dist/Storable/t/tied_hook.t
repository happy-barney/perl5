#!./perl
#
#  Copyright (c) 1995-2000, Raphael Manfredi
#
#  You may redistribute only under the same terms as Perl 5, as specified
#  in the README file that comes with the distribution.
#

use strict;
use warnings;

sub BEGIN {
    unshift @INC, 't/lib';
}

use STDump;

use Storable qw(freeze thaw);

$Storable::flags = Storable::FLAGS_COMPAT;

use Test::More tests => 28;

my (
  $scalar_fetch, $scalar_hook1, $scalar_hook2,
  $array_fetch, $array_hook1, $array_hook2,
  $hash_fetch, $hash_hook1, $hash_hook2,
) = (0) x 9;

package TIED_HASH;

sub TIEHASH {
    my $self = bless {}, shift;
    return $self;
}

sub FETCH {
    my $self = shift;
    my ($key) = @_;
    $hash_fetch++;
    return $self->{$key};
}

sub STORE {
    my $self = shift;
    my ($key, $value) = @_;
    $self->{$key} = $value;
}

sub FIRSTKEY {
    my $self = shift;
    scalar keys %{$self};
    return each %{$self};
}

sub NEXTKEY {
    my $self = shift;
    return each %{$self};
}

sub STORABLE_freeze {
    my $self = shift;
    $hash_hook1++;
    return join(":", keys %$self) . ";" . join(":", values %$self);
}

sub STORABLE_thaw {
    my ($self, $cloning, $frozen) = @_;
    my ($keys, $values) = split(/;/, $frozen);
    my @keys = split(/:/, $keys);
    my @values = split(/:/, $values);
    for (my $i = 0; $i < @keys; $i++) {
        $self->{$keys[$i]} = $values[$i];
    }
    $hash_hook2++;
}

package TIED_ARRAY;

sub TIEARRAY {
    my $self = bless [], shift;
    return $self;
}

sub FETCH {
    my $self = shift;
    my ($idx) = @_;
    $array_fetch++;
    return $self->[$idx];
}

sub STORE {
    my $self = shift;
    my ($idx, $value) = @_;
    $self->[$idx] = $value;
}

sub FETCHSIZE {
    my $self = shift;
    return @{$self};
}

sub STORABLE_freeze {
    my $self = shift;
    $array_hook1++;
    return join(":", @$self);
}

sub STORABLE_thaw {
    my ($self, $cloning, $frozen) = @_;
    @$self = split(/:/, $frozen);
    $array_hook2++;
}

package TIED_SCALAR;

sub TIESCALAR {
    my $scalar;
    my $self = bless \$scalar, shift;
    return $self;
}

sub FETCH {
    my $self = shift;
    $scalar_fetch++;
    return $$self;
}

sub STORE {
    my $self = shift;
    my ($value) = @_;
    $$self = $value;
}

sub STORABLE_freeze {
    my $self = shift;
    $scalar_hook1++;
    return $$self;
}

sub STORABLE_thaw {
    my ($self, $cloning, $frozen) = @_;
    $$self = $frozen;
    $scalar_hook2++;
}

package main;

my $a = 'toto';
my $b = \$a;

my $c = tie my %hash, 'TIED_HASH';
my $d = tie my @array, 'TIED_ARRAY';
tie my $scalar, 'TIED_SCALAR';

$scalar = 'foo';
$hash{'attribute'} = 'plain value';
$array[0] = \$scalar;
$array[1] = $c;
$array[2] = \@array;
$array[3] = "plaine scalaire";

my @tied = (\$scalar, \@array, \%hash);
my %a = ('key', 'value', 1, 0, $a, $b, 'cvar', \$a, 'scalarref', \$scalar);
my @a = ('first', 3, -4, -3.14159, 456, 4.5, $d, \$d,
    $b, \$a, $a, $c, \$c, \%a, \@array, \%hash, \@tied);

my $f = freeze(\@a);
isnt($f, undef);
my $dumped = stdump(\@a);
isnt($dumped, undef);

my $root = thaw($f);
isnt($root, undef);

my $got = stdump($root);
isnt($got, undef);

isnt($got, $dumped);            # our hooks did not handle refs in array

my $g = freeze($root);
is(length $f, length $g);

# Ensure the tied items in the retrieved image work
my @old = ($scalar_fetch, $array_fetch, $hash_fetch);
@tied = my ($tscalar, $tarray, $thash) = @{$root->[$#{$root}]};
my @type = qw(SCALAR  ARRAY  HASH);

is(ref tied $$tscalar, 'TIED_SCALAR');
is(ref tied @$tarray, 'TIED_ARRAY');
is(ref tied %$thash, 'TIED_HASH');

my @new = ($$tscalar, $tarray->[0], $thash->{'attribute'});
@new = ($scalar_fetch, $array_fetch, $hash_fetch);

# Tests 10..15
for (my $i = 0; $i < @new; $i++) {
    is($new[$i], $old[$i] + 1);         # Tests 10,12,14
    is(ref $tied[$i], $type[$i]);       # Tests 11,13,15
}

is($$tscalar, 'foo');
is($tarray->[3], 'plaine scalaire');
is($thash->{'attribute'}, 'plain value');

# Ensure hooks were called
is($scalar_hook1, 2);
is($scalar_hook2, 1);
is($array_hook1, 2);
is($array_hook2, 1);
is($hash_hook1, 2);
is($hash_hook2, 1);

#
# And now for the "blessed ref to tied hash" with "store hook" test...
#

my $bc = bless \%hash, 'FOO';           # FOO does not exist -> no hook
my $bx = thaw freeze $bc;

is(ref $bx, 'FOO');
my $old_hash_fetch = $hash_fetch;
my $v = $bx->{attribute};
is($hash_fetch, $old_hash_fetch + 1, 'Still tied');

package TIED_HASH_REF;


sub STORABLE_freeze {
    my ($self, $cloning) = @_;
    return if $cloning;
    return('ref lost');
}

sub STORABLE_thaw {
    my ($self, $cloning, $data) = @_;
    return if $cloning;
}

package main;

$bc = bless \%hash, 'TIED_HASH_REF';
$bx = thaw freeze $bc;

is(ref $bx, 'TIED_HASH_REF');
$old_hash_fetch = $hash_fetch;
$v = $bx->{attribute};
is($hash_fetch, $old_hash_fetch + 1, 'Still tied');
