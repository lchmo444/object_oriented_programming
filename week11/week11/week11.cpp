//Fig. 6.26: fig06_26.cpp
//Function template maximum test program
#include <iostream>
#include "maxium.h"	//include definition of function template maximum
using namespace std;

int main()
{
	//determine maximum with int values
	int int1,int2,int3;

	cout<<"Input three inter values: ";
	cin >> int1 >> int2 >> int3;

	//invoke int version of maximum
	cout << "The maximum integer value is: "
		<<maximum(int1,int2,int3);

	//demonstrate maximum with double values
	double double1,double2,double3;

	cout << "\n\nInput three double values: ";
	cin >> double1 >> double2 >> double3;

	//invoke double version if maximum
	cout << "The maximum double value is: "
		<<maximum(double1,double2,double3);

	//demonstrate maximum with char values
	char char1,char2,char3;

	cout<<"\n\nInput three characters: ";
	cin >> char1 >> char2 >> char3;

	//invoke char version of maximum
	cout << "The maximum character value is: "
		<<maximum(char1,char2,char3) <<endl;
}//end main