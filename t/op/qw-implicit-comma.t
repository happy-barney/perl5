#!./perl -w

use strict;

BEGIN {
	chdir 't' if -d 't';
	require './test.pl';
}

sub it;

note <<~ 'NOTE'
	qw, when evaluated in list expression, provides implicit commas around
	NOTE
    ;

plan tests => 5;

it "should not require comma after qw"
	=> expect => 'git|rebase|--interactive'
	=> got	  => eval <<~ 'GOT';
		my @interactive = ('--interactive');
		join '|',
			qw[ git rebase ]
			@interactive
		GOT
	;

it "should not require comma before qw"
	=> expect => '--interactive|git|rebase'
	=> got	  => eval <<~ 'GOT';
		my @interactive = ('--interactive');
		join '|',
			@interactive
			qw[ git rebase ]
		GOT
	;

it "should not require comma between two qw"
	=> expect => 'git|rebase|--interactive'
	=> got	  => eval <<~ 'GOT';
		join '|',
			qw[ git rebase ]
			qw[ --interactive]
		GOT
	;

it "should allow mixing implicit and exact commas"
	=> expect => 'git|rebase|--interactive'
	=> got	  => eval <<~ 'GOT'
		join '|',
			qw[ git ],,,
			qw[ rebase ]
			qw[ --interactive]
		GOT
	;

it "should not be treated as single value"
	=> expect => 'foo=<a|b> bar=<a|b>'
	=> got	  => eval <<~ 'GOT'
		no warnings 'void';
		my @foo = qw[ a b ], qw[ c d ];
		my @bar = qw[ a b ]	 qw[ c d ];

		"foo=<${\ join '|', @foo}> bar=<${\ join '|', @bar}>"
		GOT
	;

sub it {
	my ($message, %args) = @_;

	is $args{got}, $args{expect}, $message;
}

