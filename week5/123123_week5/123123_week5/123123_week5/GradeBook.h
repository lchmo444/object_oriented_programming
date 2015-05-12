//Fig. 4.8	GradeBook.h

#include <string>

class GradeBook
{
public:
	explicit GradeBook(std::string);	//initializes
	void setCourseName(std::string);	//set course name
	std::string getCourseName() const;	//retrieve the course name
	void displayMessage() const;		//display
	void determineClassAverage() const;	//averages user-entered grades

private:
	std::string courseName;
};		//end class GradeBook
