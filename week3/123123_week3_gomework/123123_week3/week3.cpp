/*
#include <iostream>
#include <string>		//C++ standard string class
using namespace std;

class Person			//class definition
{
	public:
		void displayMessage(string Sname,string Ger) const			//	should not modify the object,매개변수,인스턴스 변수
		{
			cout << Sname <<"씨 "<< Ger << " 사람 입니다." << endl;
		}
};		//end class Person

class animal
	{
	public:
		void displayMessage() const
		{
			cout <<"동물 입니다." <<endl;
		}
};

//function main begins program execution
int main()
{
	string surname;			//string type
	string gender;
	
	Person korean;				//create a Person object named korean
	animal cat;

	//prompt for and input surname
	cout << "please enter the surname:" << endl;
	getline(cin,surname);						//read a surname,string class
	cout << endl;								//output a blank line

	cout << "please enter the gender:" << endl;
	getline(cin,gender);						
	cout << endl;

	//call korean's displaymessage function
	//pass surname and gender as an argument
	korean.displayMessage(surname,gender);		//2 arguments,인자,실인자

	cat.displayMessage();
	
	return 0;
}

*/