//Fig. 6.5 : fig06_05.cpp
#include "GradeBook.h"
#include <cmath>
using namespace std;

int main()
{
	//create GradeBook object
	GradeBook myGradeBook("CS101 C++ Programming");

	

	myGradeBook.displayMessage();		//display welcome message
	myGradeBook.inputGrades();			//read grades from user
	myGradeBook.displayGradeReport();	//display report based on grades
	return 0;							//indicate successful termination
}//end main