#include <iostream>
#include "pixel.h"		//include definition of class GradeBook

using namespace std;

int main()
{
	string paa;
	//create two GradeBook objects
	Pixel pixel1("กแกแกแกแกแกแกแกแกแกแ");
	Pixel pixel2("กแกแกแกแกแกแกแ");
	/*
	cout << "pixel1: " << pixel1.getName() <<
		"\npixel2: " << pixel2.getName() <<endl;*/

	pixel1.setName("กแกแกแกแกแกแ");

	cout << "modified pixel1: " << pixel1.getName() <<
		"\nmodified pixel2: " << pixel2.getName() <<endl;
}	//end