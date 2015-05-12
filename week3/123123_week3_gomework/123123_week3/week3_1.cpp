#include <iostream>
#include <string>		//C++ standard string class
using namespace std;

class animal
	{
	public:
		//constructor initializes Name with string supplied as argument
		explicit animal(string name) :Name(name)		//member initializer to initialize Name
		{}		//empty body.animal constructor

		void setName(string name)
		{
			Name=name;
		}

		string getName() const
		{
			return Name;
		}
		void displayMessage() const
		{
			cout <<getName() <<"과 " << "동물 입니다." <<endl;		//call getName
		}
	private:
		string Name;
};

int main()
{
	//string ne;
	animal aaa("고양이");	//create animal object
	animal bbb("개");

	aaa.displayMessage();		//call getName
	bbb.displayMessage();

	return 0;
}