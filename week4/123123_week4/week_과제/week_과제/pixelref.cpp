#include <iostream>
#include "pixel.h"
using namespace std;

Pixel::Pixel(string name) :Name(name)		//member initializer to initiakize courseName
{
	setName(name);
}

void Pixel::setName(string name)
{
	if(name.size() <=14)		//if name has 25 or fewer characters
		Name = name;
	if(name.size() >14)			//if name has more than 25 characters
	{
		Name = name.substr(0,14);		//start at 0,length of 25

	cerr << "check \"" << Name <<"\" pixel maximum length (14). \n" << "error.\n" <<endl;
	}//end if
}
std::string Pixel::getName() const
{
	return Name;		//return object's courseName
}
