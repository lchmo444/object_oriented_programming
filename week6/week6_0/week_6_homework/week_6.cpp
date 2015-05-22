#include <iostream>
#include "head.h"		//include definition of class GradeBook
using namespace std;

//constructor initalizes courseName with string supplied as argument
//initializes counter data

ExChange::ExChange(string name)
:KRW(0),	//initialize count of A grades to 0
USD(0),	//initialize count of B grades to 0
EUR(0),	//initialize count of C grades to 0
CNY(0),	//initialize count of D grades to 0
AUD(0)	//initialize count of F grades to 0
{
	setCourseName(name);
	//end GradeBook constructor
}

//function to set the course name; limits name to 25 or fewer characters
void ExChange::setCourseName(string name)
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
string ExChange::getCourseName() const
{
	return courseName;
}

//display a welcome message to the GradeBook user
void ExChange::displayMessage() const
{
	//this statement calls getCourseName to get the
	//name of the course this GradeBook represents
	cout << "Welcome to System for\n" << getCourseName() << "!\n" << endl;
}	//end function displayMessage

//input arbitrary number of grades from user; update grade counter
void ExChange::inputGrade()
{
	int grade;		//grade entered by user

	cout << "Enter the USD(U or u),EUR(E or e),CNY(C or c),AUD(A or a),delete(D or d) " << endl
	<< "Enter the EOF character to end input." << endl;

	//loop until user types end-of-file key sequence
	while ((grade = cin.get()) != EOF)
	{
		//determine which grade was entered
		switch (grade)		//switch statement nested in while
		{
		case 'U':		//grade was uppercase B
		case 'u':
			cout << "input won"<< "(" "\\" << ") : ";
			cin >> WON;
			KRW = KRW +WON;
			if(WON>1000000){
				cout<<"+10000won"<<endl;
				USD=(WON+10000)/1091;}
			else
			USD = WON/1091; 
			break;		//exit switch

		case 'E':		//grade was uppercase C
		case 'e':
			cout << "input won"<< "(" "\\" << ") : ";
			cin >> WON;
			KRW = KRW +WON;
			if(WON>1000000){
				cout<<"+10000won"<<endl;
				EUR=(WON+10000)/1184;}
			else
			EUR = WON/1184;
			break;		//exit switch

		case 'C':		//grade was uppercase D
		case 'c':
			cout << "input won"<< "(" "\\" << ") : ";
			cin >> WON;
			KRW = KRW +WON;
			if(WON>1000000){
				cout<<"+10000won"<<endl;
				CNY=(WON+10000)/176.3;}
			else
			CNY = WON/176.3;
			break;		//exit switch

		case 'A':		//grade was uppercase F
		case 'a':
			cout << "input won"<< "(" "\\" << ") : ";
			cin >> WON;
			KRW = KRW +WON;
			if(WON>1000000){
				cout<<"+10000won"<<endl;
				AUD=(WON+10000)/837.29;}
			else
			AUD = WON/837.29;
			break;		//exit switch
		
		case 'D':		//grade was uppercase F
		case 'd':
			cout << "Delete \n";
			KRW=0;
			WON=0;
			USD=0;
			EUR=0;
			CNY=0;
			AUD=0;
			break;		//exit switch

		case '\n':		//ignore newlines,
		case '\t':		//tabs,
		case ' ':		//and spaces ininput
			break;	//exit switch

		default:		//catch all other characters
			cout << "Incorrect letter."
				<< " Enter a won." << endl;
			break;		//optional; will exit switch anyway
		}	//end switch
	}
}

void ExChange::displayGradeReport() const
{
	//output summary of results
	cout << "\n\nAll of ExChange :"
		<< "\nKRW: " << KRW	//display number of A grades
		<< "\nUSD: " << USD	//display number of B grades
		<< "\nEUR: " << EUR	//display number of C grades
		<< "\nCNY: " << CNY	//display number of D grades
		<< "\nAUD: " << AUD	//display number of F grades
		<< endl;
}//ebd function displayGradeReport