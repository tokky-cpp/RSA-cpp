use strict;
use warnings;

sub gcd{
    my ($a, $b) = @_;

    while(1){
	if($a<$b){
	    my $t = $a;
	    $a = $b;
	    $b = $t;
	}
	if($a % $b == 0){return $b;}
	else{
	    $a = $a % $b;
	}
    }
}

sub lcm{
    my ($a, $b) = @_;
    return $a*$b/(&gcd($a,$b));
}


my $x = <STDIN>;
my $y = <STDIN>;
printf("gcd:%d\n",&gcd($x,$y));
printf("lcm:%d\n",&lcm($x,$y));
