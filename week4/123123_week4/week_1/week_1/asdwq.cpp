#include <iostream>
#include "GradeBook.h"		//include definition of class GradeBook

using namespace std;

int main()
{
	//create two GradeBook objects

	GradeBook gradeBook1("CS101 Introduction to Programming in C++");
	GradeBook gradeBook2("CS102 C++ Data Structures");
	
	//display each GrandeBook's courseName
	cout << "gradeBook1's initial course name is: "
		<<gradeBook1.getCourseName() << " ,course_name_size "<< gradeBook1.getNumber()
		<<"\ngradeBook2's initial course name is: " << gradeBook2.getCourseName() << " ,course_name_size "<< gradeBook2.getNumber()  << endl;

	//modify gradeBook1's courseName(with a valid-length string)
	gradeBook1.setCourseName("CS101 C++ Programming");

	//display each GradeBook's courseName
	cout << "\ngradeBook1's course name is: " <<gradeBook1.getCourseName() << " ,course_name_size " << gradeBook1.getNumber() <<
		"\ngradeBook2's course name is: " << gradeBook2.getCourseName() << " ,course_name_size "<< gradeBook2.getNumber()<< endl;
	
	cout<<std::abs(-12423);		//Àý´ë°ª
}