//Fig. 7.12: fig07_12.cpp
//static array initialization and automatic array initialization.
#include <iostream>
#include <array>	//array type library
using namespace std;

void staticArrayInit();	//function prototype
void automaticArrayInit();	//function prototype
const size_t arraySize = 3;

int main()
{
	cout << "First call to each function:\n";
	staticArrayInit();
	automaticArrayInit();

	cout << "\n\nSecond call to each function:\n";
	staticArrayInit();
	automaticArrayInit();
	cout << endl;
}	//end main

//function to demonstrate a static local array
void staticArrayInit(void)
{
	//initializes elements to 0 first time function is called
	//static array<int, arraySize> array1;	//static local array
	static int array1[3];	//static local array_ppt

	cout << "\nValues on entering staticArrayInit:\n";

	//output contents of array1
	//for(size_t i = 0; i<array1.size();++i)
		for(int i=0; i < 3; i++)				//ppt
		cout << "array1[" << i << "] = " << array1[i] << " ";

	cout << "\nValues on entering staticArrayInit:\n";

	//modify and output contents of array1
	//for(size_t j=0; j <array1.size();++j)
		for(int j=0; j < 3; j++)				//ppt
		cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";
}	//end function staticArrayInit

//function to demonstrate an automatic local array
void automaticArrayInit(void)
{
	//initializes elements each time function is called
	//array<int,arraySize> array2 = {1,2,3};	//automatic local array
	int array2[3] = {1,2,3};	//automatic local array_ppt

	cout << "\n\nValues on entering automaticArrayInit:\n";

	//output contents of array2
	//for(size_t i = 0; i < array2.size(); ++i)
		for(int i=0; i < 3; i++)				//ppt
		cout <<"array2[" <<i << "] = " << array2[i] << " ";

	cout << "\nValues on exiting automaticArrayInit:\n";

	//modify and output contents of array2
	//for(size_t j=0; j< array2.size(); ++j)
		for(int j=0; j < 3; j++)				//ppt
		cout << "array2[" <<j << "] = " << (array2[j]+=5) << " ";
}	//end function automaticArrayInit