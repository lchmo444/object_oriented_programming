#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name) :courseName(name)		//member initializer to initiakize courseName
{
	setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
	if(name.size() <=25)		//if name has 25 or fewer characters
		courseName = name;
	if(name.size() >25)			//if name has more than 25 characters
	{
		courseName = name.substr(0,25);		//start at 0,length of 25

	cerr << "Name \"" << name <<"\" exceeds maximum length (25). \n" << "Limiting courseName to first 25 characters.\n" <<endl;
	}//end if
	length=name.length();
}
std::string GradeBook::getCourseName() const
{
	return courseName;		//return object's courseName
}
int GradeBook::getNumber() const
{
	return length;		//return object's num
}


