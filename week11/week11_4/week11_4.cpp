//Fig. 7.11: fig07_11.cpp
//Student poll program.
#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{
	//define array sizes
	const int responseSize = 40;	//size if array responses
	const int frequencySize =11;	//size of array frequency

	//place survey responses in array responses
	const int responses[responseSize] = {1,2,6,4,8,5,9,7,8,
		10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,8,6,7,
		5,6,6,5,6,7,5,6,4,8,6,8,10};				//initialize responses with 40 responses

	//initialize frequency counters to 0
	int frequency[frequencySize] = {0};		//initialize frequency to all 0s

	//for each answer, select responses element and use that value
	//as frequency subscript to determine element to increment
	for(int answer = 0; answer < responseSize; answer++)
		frequency[responses[answer]]++;		//For each response, increment frequency value at the index associated with that response

	cout << "Rating" << setw(17) << "Frequency" <<endl;

	//output each array element;s value
	for(int rating =1; rating < frequencySize; rating++)
		cout << setw(6) << rating << setw(17) << frequency[rating]
	<<endl;

	return 0;	//indicates successful termination
}//end main