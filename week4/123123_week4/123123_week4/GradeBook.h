//GradeBook.h

#include <iostream>
#include <string>

//GradeBook class definition

class GradeBook
{
public:
	//constructor initializes courseName with string supplied as argument
	explicit GradeBook(std::string name) : courseName(name)
	{
		//empty body
	}

	//function to set the course name
	void setCourseName(std::string name)
	{
		courseName = name;	//store the course name in the object
	}	//end function setCourseName

	std::string getCourseName() const
	{
		return courseName;
	}

	void displayMessage() const
	{
		std::cout <<"Welcome to the grade book for\n" <<getCourseName() << "!" << std::endl;
	}		//end function displayMessage
	int PPP()
	{
		return 100;
	}

private:
	std::string courseName;
};	//end class GradeBook