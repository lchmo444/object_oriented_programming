#include <iostream>
#include <array>
using namespace std;

const size_t rows =2;
const size_t columns = 3;

void printArray(const array<array<int,columns>,rows> & a)
{
	for(auto const &rows : a)
	{
		for(auto const &element : rows)
			cout << element << ' ';
		cout << endl;
	}
}

int main()
{
	array<array<int,columns>,rows> array1 = {1,2,3,4,5,6};
	array<array<int,columns>,rows> array2 = {1,2,3,4,5};

	printArray(array1);

}