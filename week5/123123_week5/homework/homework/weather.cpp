//Fig 4.9 GradeBook.cpp

#include <iostream>

#include <iomanip>		// Add parameterized stream manipulators			(2)

#include "weather_h.h"	//include header
using namespace std;

//constructor initializes courseName with string supplied as argument
weather::weather(string name)
{
	setCourseName(name);
}//end GradeBook constructor

void weather::setCourseName(string name)
{
	if(name.size() <= 25)	//if name has 25 or fewer characters
		courseName = name;
	else	//if name is longer than 25 characters
	{
		courseName = name.substr(0,25);	//select first 25 characters
		cerr << "Name \"" << name << "\" exceeds maximum length (25). \n"
			<< "Limiting courseName to first 25 characters. \n" << endl;
	}	//end if...else
}	//end function setCourseName

//function to retrieve the course name
string weather::getCourseName() const
{
	return courseName;
}//end function

//display a welcome message to the GradeBook user
void weather::displayMessage() const
{
	cout << "weather forecast for\n" <<getCourseName() << "!\n"
		<<endl;
}	//end function displayMessage




//determine class average based on 10 grades entered by user			(2)
void weather::determineClassAverage() const
{
	//initialization phase
	int total =0;	//sum of grades entered by user
	unsigned int dust_Counter =0; //number of grades entered
	int good=0;
	int normal=0;
	int bad=0;
	int verybad=0;

	//processing phase
	//prompt for input and read grade from user
	cout << "Enter micro_dust or -1 to quit: ";
	int dust = 0;	//dust value
	int pre_dust=0;

	cin >> dust;	//input grade or sentinel value
	if ((dust>0) && (dust <= 30)) // 범위별로 대기상태가 좋았는지 안좋았는지를 카운트한다
	{
		good++;
	}
	else if ((dust>30) && (dust <= 80))
	{
		normal++;
	}
	else if ((dust>80) && (dust <= 150))
	{
		bad++;
	}
	else if (dust>150)
	{
		verybad++;
	}

	//loop until sentinel value read grade from user
	while(dust!=-1)	//while grade is not -1
	{
		total = total + dust; //add grade to total
		dust_Counter = dust_Counter +1;	//increment counter

		//prompt for input and read next grade from user
		cout << "Enter micro_dust or -1 to quit: ";
		cin >> dust;	//input grade or sentinel value
		if(dust>=pre_dust)
			pre_dust=dust;
		if ((dust>0) && (dust <= 30)) // 범위별로 대기상태가 좋았는지 안좋았는지를 카운트한다
	{
		good++;
	}
	else if ((dust>30) && (dust <= 80))
	{
		normal++;
	}
	else if ((dust>80) && (dust <= 150))
	{
		bad++;
	}
	else if (dust>150)
	{
		verybad++;
	}
	}	//end whule


	if(dust_Counter != 0)	//if user entered at least one grade...
	{
		//calculate average of all grades entered
		double average = static_cast<double>(total) / dust_Counter;

		//display total and average(with two digits of precision)
		cout << "\nTotal of all " <<dust_Counter << " micro_dust entered is " <<total << endl;
		cout <<"maximum micro_dust is " <<pre_dust<< endl;
		cout <<setprecision(2) <<fixed;
		cout<<"micro_dust average is " <<average <<endl;
		cout << "좋음 " << good << "회 보통 " << normal << "회 나쁨 " << bad << "회 매우나쁨 " << verybad << "회" << endl;

	} //end if
	else	//no grades were entered, so output appropriate message
		cout << "No dust were entered" <<endl;
}
