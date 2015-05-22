//Fig. 7.14: fig07_14.cpp
//passing arrays and individual array elements to functions_modified
#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

void modifyArray(int [],int);	//appears strange
void modifyElement(int);

int main()
{
	const int arraySize = 5;	//size of array a
	int a[arraySize] = {0,1,2,3,4};	//initialize array a

	cout << "Effects of passing entire array by reference:"
		<< "\n\nThe values of the original array are:\n";

	//output original array elements
	for(int i=0; i<arraySize; i++)
		cout <<setw(3) << a[i];

	cout << endl;

	//pass array a to modifyArray by reference
	modifyArray(a,arraySize);
	cout << "The values of the modified array are:\n";

	//output modified array elements
	for(int j =0; j < arraySize; j++)
		cout << setw(3) << a[j];

	cout << "\n\n\nEffects of passing array element by value:"
		<< "\n\na[3] before modifyElement: " << a[3] << endl;

	modifyElement(a[3]);	//pass array element a[3] by value
	cout << "a[3] after modifyElement: " << a[3] << endl;

	return 0;	//indicates successful termination
}//end main

//in function modifyArray, "b" points to the original array "a" in memory
void modifyArray(int b[],int sizeOfArray)
{
	//mutiple each array element by 2
	for(int k=0; k < sizeOfArray; k++)
		b[k]*=2;
}	//end function modifyArray