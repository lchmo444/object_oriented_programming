//Fig. 6.28: fig06_28.cpp
//Testing the recursive factorial function.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long);	//function prototype


int main()
{
	//calculate the factorials of 0 through 10
	for(int counter =0; counter <=10; counter++)
		cout << setw(2) << counter << "! = " <<factorial(counter)
		<<endl;
}//end main

//recursive definition of function factorial
unsigned long factorial(unsigned long number)
{
	if(number <=1)	//test for base case
		return 1;	//base cases: 0! = 1 and 1! =1
	else	//recursion step
		return number*factorial(number -1);
}//end function factorial



