#include <string>	

//GradeBook class definition
class GradeBook
{
public:

	//int length;

	explicit GradeBook(std::string);		//constructor initialize courseName
	void setCourseName(std::string);		//set the course name
	std::string getCourseName() const;		//gets the course name
	int getNumber() const;
	void displayMessage() const;			//display a welcome message


private:
	std::string courseName;
	int length;
};