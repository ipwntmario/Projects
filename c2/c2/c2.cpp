// Dylan Travers
// 9/6/2013
// CIT-245: Data Structures and Programming C++
// Chapter 2 Homework - Due 9/8/2013

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	double radius;
	double weight;
	double buoyantForce;
	int recalculate;
	const double PI = 3.141592;

	cout << "This program computers the buoyant force of water on a sphere, given its radius.\n"
		 << "Based on the weight of the sphere, it determines whether the sphere floats or sinks.\n\n\n";

	do
	{
		cout << "Enter the radius of the sphere.\n";
		cin >> radius;
		cout << "You entered " << radius << "\n\n";

		cout << "Enter the weight of the sphere.\n";
		cin >> weight;
		cout << "You entered " << weight << "\n\n";

		buoyantForce = 4.0 / 3.0 * PI * radius * radius * radius * 62.4;
		cout << "Buoyant Force = " << buoyantForce << "\n";

		if (buoyantForce > weight)
			cout << "Egads, it floats!\n";
		else
			cout << "It sunk...\n";

		cout << "Recalculate? (1 = yes, 0 = exit)\n";
		cin >> recalculate;

	} while (recalculate == 1);

	system("pause");
	return 0;
}