// Dylan Travers
// 9/22/13
// CIT-245: Data Structures and Programming C++
// Chapter 1 Homework REVISION

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	double input;
	double guess;
	double r;

	cout << "Enter a number.\n"
		 << "The Babylonian square root algorithm will be applied\n"
		 << "until I am within .001 of the correct answer.\n";
	cin >> input;
	cout << "You entered " << input << "\n";

	guess = input / 2;

	do
	{
		r = input / guess;
		guess = (guess + r) / 2;
		cout << "guessing " << guess << "\n";
	} while (guess * guess > input);

	cout << "The Babylonian square root algorithm gives " << guess << "\n";
	cout << "Checking: " << guess << " * " << guess << " = " << guess * guess << "\n";

	system("pause");
	return 0;
}