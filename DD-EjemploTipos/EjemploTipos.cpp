#include<cassert>
#include<string>
using namespace std::literals;

int main()
{
  // bool
	assert(2==1+1);
	assert(true);
  assert(false==false);
  assert(true!=false);
  assert(not false);
  assert(not false==true);
  assert(false or true);
  assert(true and true);
  assert(false or true and false==false);
  assert((false or true) and false==false);
  assert(true or true and false);

  // int
  assert(2.0==1.0+1.0);
  assert(0.1==1.0/10.0);
  assert(1==1.0);
  assert(2.0==1+1.0);
  assert(2==1+1.0);

  // strings
  assert("Nacho Nieva"s=="Nacho"s+" "+"Nieva"s);
  assert("Nacho Nieva"s.length()==11); 

  // char
  assert("a"!="");
  assert(""=="");

  // double. why case 3 works?
  assert((double) 4 == (double) 4);
  assert((double) 4/4 == (double) 1);

  assert((int) 4/4 == (double) 1);

  // short int
  assert((short int) 4 == (short int) 4);
  assert((short int) 4/4 == (short int) 1);

  // long long int
  assert((long long int) 1 == (long long int) 1);

  // unsigned long long int?
  assert((unsigned long long int) 0-1 > 0);

  // float. Why case 2 works?
  assert((float) 4.123123123 == (float) 4.123123123);
  assert((float) 4.123123123/4.123123123 != (float)1);
}
