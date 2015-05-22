//Fig. 5.11: fig05_11.cpp
//환율 우대 0.9%

#include "head.h"	//include definition of class Gradebook

int main()
{
	//create GradeBook object
	ExChange myExChange("ExChange rate");

	myExChange.displayMessage();		//display welcome message
	myExChange.inputGrade();			//read grades from user
	myExChange.displayGradeReport();	//display report based on grades

}//end main