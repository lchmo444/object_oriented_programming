//Fig. 6.4: GradeBook.cpp

#include <iostream>
#include <string>

using namespace std;

#include "GradeBook.h"

//initializes studentMaximum to 0
GradeBook::GradeBook(string name)	: maximumGrade(0)	//this value will be replaced by the maximum grade
{
	setCourseName(name);		//validate and store courseName
}	//end GradeBook constructor

//function to set the course name; limits name to 25 or fewer charcaters
void GradeBook::setCourseName(string name)
{
	string title="CS101 C++ Programming";
	if(name.length()<=25)	//if name has 25 of fewer characters
		courseName = name;	//store the course name in the object
	else	//if name is longer than 25 characters
	{	//set courseName to first 25 characters of parameter name
		cout << "Name \"" << name << "\" exceeds maximum length (25). \n"
			<< "Limiting courseName to first 25 characters. \n" <<endl;
		/////(1)//////////////modified ///////////////////
		name.swap(title);	//swap name
		//////////////////////////////////////////////////
	}	//end if...else
}	//end function setCourseName

//function to retrieve the course name
string GradeBook::getCourseName() const											//add const
{
	return courseName;
}	//end function getCourseName

//display a welcome message to the GradeBook user
void GradeBook::displayMessage() const											//add const
{
	//this statement calls getCourseName to get the
	//name of the course this GradeBook represents
	cout <<"Welcome to the grade book for\n" << getCourseName() << "!\n"
		<<endl;
}//end fun


/////////////////////////(2)/////////////////////
//input three grades from user; determine maximum
/////////////////////////////////////////////////
void GradeBook::inputGrades()
{
	int grade1;	//first grade entered by user
	int grade2;	//second grade entered by user
	int grade3;	//third grade entered by user
	int grade4;	//fourth grade entered by user

	cout << "Enter three integer grades: ";
	cin >> grade1 >> grade2 >> grade3 >> grade4;

	//store maximum in member studentMaximum
	maximumGrade = maximum(grade1,grade2,grade3,grade4);
}//end fun

/////////////////////////(3)////////////////////////
//return the maximum of its three integer papameters
////////////////////////////////////////////////////
int GradeBook::maximum(int x,int y,int z,int d) const								//add const
{
	int maximumValue = x;	//assume x is the largest to start

	//determine whether y is greater than maximumvalue
	if(y>maximumValue)
		maximumValue = y;	//make y the new maximumValue
	//determine whether z is greater than maximumvalue
	if(z>maximumValue)
		maximumValue = z;	//make z the new maximumValue
	//determine whether d is greater than maximumvalue
	if(d>maximumValue)
		maximumValue = d;	//make d the new maximumValue

	return maximumValue;
}	//end function

////////////////(4)////////////////////////////////////
//display a report based on the grades entered by user
void GradeBook::displayGradeReport() const										//add const
{
	//output maximum of grades entered
	cout << "Maximum of grades entered: "<< maximumGrade << endl;
}	//end function