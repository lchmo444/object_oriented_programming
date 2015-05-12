//Fig 4.9 GradeBook.cpp

#include <iostream>

#include <iomanip>		// Add parameterized stream manipulators			(2)

#include "GradeBook.h"	//include header
using namespace std;

//constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name)
{
	setCourseName(name);
}//end GradeBook constructor

void GradeBook::setCourseName(string name)
{
	if(name.size() <= 25)	//if name has 25 or fewer characters
		courseName = name;
	else	//if name is longer than 25 characters
	{
		courseName = name.substr(0,25);	//select first 25 characters
		cerr << "Name \"" << name << "\" exceeds maximum length (25). \n"
			<< "Limiting courseName to first 25 characters. \n" << endl;
	}	//end if...else
}	//end function setCourseName

//function to retrieve the course name
string GradeBook::getCourseName() const
{
	return courseName;
}//end function

//display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" <<getCourseName() << "!\n"
		<<endl;
}	//end function displayMessage




//determine class average based on 10 grades entered by user			(2)
void GradeBook::determineClassAverage() const
{
	//initialization phase
	int total =0;	//sum of grades entered by user
	unsigned int gradeCounter =0; //number of grades entered

	//processing phase
	//prompt for input and read grade from user
	cout << "Enter grade or -1 to quit: ";
	int grade = 0;	//grade value
	cin >> grade;	//input grade or sentinel value

	//loop until sentinel value read grade from user
	while(grade!=-1)	//while grade is not -1
	{
		total = total + grade; //add grade to total
		gradeCounter = gradeCounter +1;	//increment counter

		//prompt for input and read next grade from user
		cout << "Enter grade or -1 to quit: ";
		cin >> grade;	//input grade or sentinel value
	}	//end whule


	if(gradeCounter != 0)	//if user entered at least one grade...
	{
		//calculate average of all grades entered
		double average = static_cast<double>(total) / gradeCounter;

		//display total and average(with two digits of precision)
		cout << "\nTotal of all " <<gradeCounter << " grades entered is " <<total << endl;
		cout <<setprecision(2) <<fixed;
		cout<<"Class average is " <<average <<endl;

	} //end if
	else	//no grades were entered, so output appropriate message
		cout << "No grades were entered" <<endl;
}
