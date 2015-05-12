//Fig. 6.3: GradeBook.h
//Member function are defined in GradeBook.cpp

#include <string>	//program uses C++ standard string class

//GradeBook class definition
class GradeBook
{
public:
	explicit GradeBook(std::string);	//constructor initializes
	void setCourseName(std::string);	//finction to set the course name
	std::string getCourseName() const;	//function to retrieve the course name
	void displayMessage() const;		//displat a welcome message
	void inputGrades();					//input three grades from user
	void displayGradeReport() const;	//displat a report based on the grades
	int maximum(int, int, int, int) const;	//determine max of 4 values
private:
		std::string courseName;				//course name for this GradeBook
		int maximumGrade;					//maximum of three grades
};	//end class