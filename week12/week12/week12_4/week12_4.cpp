//Fig. 7.22: fig07_22.cpp
//initializing multidimensional arrays.
#include <iostream>
using namespace std;



void printArray1(const int[][3]);	//prototype1

int main()
{
	int array1[2][3] = {{1,2,3},{4,5,6}};
	int array2[2][3] = {1,2,3,4,5};
	int array3[2][3] = {{1,2},{4}};

	cout << "Values in array1 by row are: " <<endl;
	printArray1(array1);

	cout << "\nValues in array2 by row are: " << endl;
	printArray1(array2);

	cout << "\nValues in array3 by row are: " << endl;
	printArray1(array3);

	return 0;	//indicates successful termination
}//end main

//output array with two rows and three columns
void printArray1(const int a[][3])
{
	//loop through array's rows
	for(int i=0; i<2; i++)
	{
		//loop through columns of current row
		for(int j=0; j <3;j++)
			cout << a[i][j] << ' ';

		cout << endl;	//start new line of output
	}	//end outer for
}	//end function printArray
//output array wirh two rows and three columns