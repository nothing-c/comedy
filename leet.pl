#!/usr/bin/perl

#Can set this up as preprocessor for irc?

#beginning regex pour
$input = @ARGV[0];
#replacing "the" with "teh"
$input =~ s/\sthe\s/ teh /g;
#replace you with j00
$input =~ s/\syou\s/ j00 /g;
#replace chick with chixor
$input =~ s/\schick(s)\s/ chixor /g;
#replace hacker with haxx0rz
$input =~ s/\shacker(s)\s/ haxx0rz /g;
#replace grl with grrl
$input =~ s/\sgrl\s/ grrl /g;
#replace f with ph
$input =~ s/[Ff]/ph/g;
#replace a with 4
$input =~ s/[Aa]/4/g;
#replace e with 3
$input =~ s/[Ee]/3/g;
#replace l with 1
$input =~ s/[Ll]/1/g;
#replace t with 7
$input =~ s/[Tt]/7/g;
#replace o with 0
$input =~ s/[Oo]/0/g;
#replace n with |\|
$input =~ s/[Nn]/\|\\\|/g;
#replace h with |-|
$input =~ s/[Hh]/\|\-\|/g;
#replace k/ck with xx
$input =~ s/(c)k/xx/g;
#replace ending with s with z0rz
$input =~ s/[Ss]\s/z0rz /g;
#replace c with [
$input =~ s/[Cc]/\[/g;
#replace d with |)
$input =~ s/[Dd]/\|\)/g;
#replace m with /\/\
$input =~ s/[Mm]/\/\\\/\\/g;
#replace w with \/\/
$input =~ s/[Ww]/\\\/\\\//g;
#replace k with |<
$input =~ s/[Kk]/\|\</g;
#replace u with |_|
$input =~ s/[Uu]/\|\_\|/g;
#replace s with 5
$input =~ s/[Ss]/5/g;
#replace g with 6
$input =~ s/[Gg]/6/g;
#replace b with 8
$input =~ s/[Bb]/8/g;
#replace v with \/
$input =~ s/[Vv]/\\\//g;
#end regex pour
print $input;
print "\n";
