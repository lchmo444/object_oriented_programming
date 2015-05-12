//Fig. 5.11: fig05_11.cpp
#include "GradeBook.h"	//include definition of class Gradebook

int main()
{
	//create GradeBook object
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage();		//display welcome message
	myGradeBook.inputGrade();			//read grades from user
	myGradeBook.displayGradeReport();	//display report based on grades

}//end main