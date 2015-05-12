#include "GradeBook.h"

int main()
{
	//create GradeBook object myGradeBook and
	//pass course name to constructor
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage();
	myGradeBook.determineClassAverage();
}