#include <string>	//standard string class

//GradeBook class definition

class ExChange
{
public:
	explicit ExChange(std::string);		//initialize course name
	void setCourseName(std::string);		//set the course name
	std::string getCourseName() const;		//retrieve the course name
	void displayMessage() const;			//display a welcome message
	void inputGrade();						//input arbitrary number of grade from user
	void displayGradeReport() const;			//display report based on user input
private:
	std::string courseName;					//course name for this GradeBook
	double WON;					//count of A grades
	unsigned int KRW;					//count of A grades
	double USD;					//count of B grades
	double EUR;					//count of C grades
	double CNY;					//count of D grades
	double AUD;					//count of F grades
};	