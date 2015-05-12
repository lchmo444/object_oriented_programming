#include <iostream>
using namespace std;

//function square for int values
int square(int x)
{
	cout << "square of integer " << x << " is ";
	return x*x;
}	//end function square with int argument

//function square for double values
double square(double y)
{
	cout << "square of double " << y << " is ";
	return y*y;
}	//end function square with double argument

//function square for int(enum) values
int square(enum E_num e_num)
{
	cout << "square of integer(enum) " << e_num << " is ";
	return e_num*e_num;
}	//end function square with int argument

int main()
{
	enum four_five{four=4,five};
	four_five num = five;
	cout << square(7);			//calls int version
	cout << endl;
	cout << square(7.5);		//calls double version
	cout << endl;
	cout << square(num);		//calls enum versioin
	cout << endl;
}