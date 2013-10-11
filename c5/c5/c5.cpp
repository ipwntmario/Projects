// Dylan Travers
// 9/21/2013
// CIT-245: Data Structures and Programming C++
// Chapter 5 Homework - Due 9/22/2013

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;


int main()
{
	int a[20];
	int input;

	do
	{
		int nCount[10] = { 0 };

		for (int i = 0; i < 20; i++)
		{
			a[i] = rand() % 10 + 1;
		}
		sort(a,a+20);

		cout << "This program generates random numbers and tabulates the results\n\n";

		cout << "Original List Sorted:\n";
		for (int i = 0; i < 20; i++)
		{
			i < 10 ? cout << "a[ " : cout << "a[";
			cout << i << "]  " << a[i] << "\n";

			// Tally up frequency of numbers
			nCount[ a[i] - 1 ]++;
		}
		cout << "\n\n";
	
		cout << "  N Count\n";
		for (int i = 0; i < 10; i++)
		{
			i < 9 ? cout << "  " : cout << " ";
			cout << i + 1 << ":  " << nCount[i] << "\n";
		}
		cout << "\n\n";

		cout << "Try Again? (1 = yes, 0 = exit)\n";
		cin >> input;

	} while (input == 1);

	system("pause");
	return 0;
}