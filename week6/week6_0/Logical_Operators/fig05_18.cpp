//Fig 5.18: fig05_18

#include <iostream>
using namespace std;

int main()
{
	//create truth table for && (logical AND) operator
	cout << boolalpha << "Logical AND(&&)"
		<<"\nfalse  && false: " << (false && false)
		<<"\nfalse  && true: " << (false && true)
		<<"\ntrue  && false: " << (true && false)
		<<"\ntrue  && true: " << (true && true) << "\n\n";

	//create truth tavle for || (logical OR) operaor
	cout <<  "Logical OR(||)"
		<<"\nfalse  || false: " << (false || false)
		<<"\nfalse  || true: " << (false || true)
		<<"\ntrue  || false: " << (true || false)
		<<"\ntrue  || true: " << (true || true) << "\n\n";

	//create truth table for ! (logical negation) operator
	cout << "Logical Not (!)"
		<<"\n!false: " <<(!false)
		<<"\n!true: "<<(!true) <<"\n\n";
	
	//option
	cout << (!true||!(true&&true)&&true||true&&true) <<endl;
}//end main