#include <iostream>
#include "GradeBook.h"		//include definition of class GradeBook
using namespace std;

//constructor initalizes courseName with string supplied as argument
//initializes counter data

GradeBook::GradeBook(string name)
:aCount(0),	//initialize count of A grades to 0
bCount(0),	//initialize count of B grades to 0
cCount(0),	//initialize count of C grades to 0
dCount(0),	//initialize count of D grades to 0
fCount(0)	//initialize count of F grades to 0
{
	setCourseName(name);
	//end GradeBook constructor
}

//function to set the course name; limits name to 25 or fewer characters
void GradeBook::setCourseName(string name)
{
	if (name.size() <= 25)		//if name has 25 or fewer characters
		courseName = name;		//store the course name in the object
	else
	{
		courseName = name.substr(0, 25);		//select first 25 characters
		cerr << "Name \"" << name << "\" execeeds maximum lengrh (25). \n" <<
			"Limiting courseName to first 25 characters. \n" << endl;
	}		//end if...else
}			//end function setCourseName

//function to retrieve the course name
string GradeBook::getCourseName() const
{
	return courseName;
}

//display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
	//this statement calls getCourseName to get the
	//name of the course this GradeBook represents
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}	//end function displayMessage

//input arbitrary number of grades from user; update grade counter
void GradeBook::inputGrade()
{
	int grade;		//grade entered by user

	cout << "Enter the letter grades. " << endl
	<< "Enter the EOF character to end input." << endl;

	//loop until user types end-of-file key sequence
	while ((grade = cin.get()) != EOF)
	{
		//determine which grade was entered
		switch (grade)		//switch statement nested in while
		{
		case 'A':		//grade was uppercase A
		case 'a':		//or lowercase a
			++aCount;	//increment aCount
			break;		//necessary to exit switch

		case 'B':		//grade was uppercase B
		case 'b':
			++bCount;	//increment bCount
			break;		//exit switch

		case 'C':		//grade was uppercase C
		case 'c':
			++cCount;	//increment cCount
			break;		//exit switch

		case 'D':		//grade was uppercase D
		case 'd':
			++dCount;	//increment dCount
			break;		//exit switch

		case 'F':		//grade was uppercase F
		case 'f':
			++fCount;	//increment aCount
			break;		//exit switch

		case '\n':		//ignore newlines,
		case '\t':		//tabs,
		case ' ':		//and spaces ininput
			break;	//exit switch

		default:		//catch all other characters
			cout << "Incorrect letter grade entered."
				<< " Enter a new grade." << endl;
			break;		//optional; will exit switch anyway
		}	//end switch
	}
}

void GradeBook::displayGradeReport() const
{
	//output summary of results
	cout << "\n\nNumber of students who received each letter grade:"
		<< "\nA: " << aCount	//display number of A grades
		<< "\nB: " << bCount	//display number of B grades
		<< "\nC: " << cCount	//display number of C grades
		<< "\nD: " << dCount	//display number of D grades
		<< "\nF: " << fCount	//display number of F grades
		<< endl;
}//ebd function displayGradeReport