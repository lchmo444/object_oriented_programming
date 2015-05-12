#include "weather_h.h"

int main()
{
	//create GradeBook object myGradeBook and
	//pass course name to constructor
	weather myweather("Microdust program");

	myweather.displayMessage();
	myweather.determineClassAverage();
}