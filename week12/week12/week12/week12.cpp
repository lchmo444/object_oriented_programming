//Fig. 7.12: fig07_12.cpp
//Treating character arrays as strings.
#include <iostream>
using namespace std;

int main()
{
	char string1[20];	//reserves 20 characters
	char string2[] = "string literal";

	//read string from user into array string1
	cout << "Enter the string \"hello there\": ";
	cin>>string1;	//reads "hello" [space terminates input]

	//output strings
	cout << "string1 is: " << string1 << "\nstring2 is : "<<string2;

	cout << "\nstring1 with spaces between characters is:\n";

	//output characters until null character is reached
	for(int i=0; string1[i]!='\0';i++)
		cout << string1[i] << ' ';
	
	cin >> string1;	//read "there"
	cout << "\nstring1 is : " << string1 << endl;

	return 0;	//indicates successful termination
}//end main
