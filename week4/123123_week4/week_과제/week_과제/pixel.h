#include <string>	

//GradeBook class definition
class Pixel
{
public:

	explicit Pixel(std::string);		//constructor initialize courseName
	void setName(std::string);		//set the course name
	std::string getName() const;		//gets the course name
	int getPixel() const;


private:
	std::string Name;
	int length;
};