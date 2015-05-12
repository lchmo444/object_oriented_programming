//Fig. 6.29: fig06_29.cpp
//Testing the recursive fibonacci function
#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long);	//function prototype

int main()
{
	//calculate the fibonacci values of 0 through 10
	for(int counter = 0; counter <=10; counter++)
		cout<<"fibonacci(" <<counter << ")= "
		<<fibonacci(counter) <<endl;

	//display higher fibonacci values
	cout << "fibonacci(20) = " <<fibonacci(20) << endl;
	cout << "fibonacci(30) = " <<fibonacci(30) << endl;
	cout << "fibonacci(35) = " <<fibonacci(35) << endl;
}//end main

//recursive method fibonacci
unsigned long fibonacci(unsigned long number)
{
	if((number ==0) || (number == 1)) //base cases
		return number;
	else	//recursion step
		return fibonacci(number -1 ) + fibonacci(number -2);
}//end function fibonacci
