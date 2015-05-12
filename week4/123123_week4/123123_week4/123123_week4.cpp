#include <iostream>
#include "GradeBook.h"		//include definition of class GradeBook

using namespace std;

int main()
{
	//create two GradeBook objects
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	cout << "gradeBook1 created for course: " <<gradeBook1.getCourseName() <<
		"\ngradeBook2 created for course: " <<gradeBook2.getCourseName() << endl;

	cout << gradeBook1.PPP() <<endl;		//show gradeBook1 num
	cout<<std::abs(-12423);		//Àý´ë°ª
}	//end