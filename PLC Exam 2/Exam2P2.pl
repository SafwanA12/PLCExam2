#Safwan Alam Exam 2 Problem 2 002248637
$a = 2;

sub sub1 {
  return $a;
}

sub static {
  my $a = 4;
  return sub1();
}

$b = 6;

sub sub2 {
  return $b;
}

sub dynamic {
  local $b = 8;
  return sub2();
}

print "Static Scoping: ", static(), "\n";

print "Dynamic Scoping: ", dynamic(), "\n";