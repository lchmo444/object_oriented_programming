#include <string>	//standard string class

//GradeBook class definition

class GradeBook
{
public:
	explicit GradeBook(std::string);		//initialize course name
	void setCourseName(std::string);		//set the course name
	std::string getCourseName() const;		//retrieve the course name
	void displayMessage() const;			//display a welcome message
	void inputGrade();						//input arbitrary number of grade from user
	void displayGradeReport() const;			//display report based on user input
private:
	std::string courseName;					//course name for this GradeBook
	unsigned int aCount;					//count of A grades
	unsigned int bCount;					//count of B grades
	unsigned int cCount;					//count of C grades
	unsigned int dCount;					//count of D grades
	unsigned int fCount;					//count of F grades
};	