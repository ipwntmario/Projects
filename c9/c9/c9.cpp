// Dylan Travers
// 10/5/2013
// CIT-245: Data Structures and Programming C++
// Chapter 9 Homework - Due 10/6/2013

#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;


void revString(char* s);

int main()
{
	int go = 1;
	char* s = (char *)malloc(80);

	cout << "This program reverses a string using the STL stack" << endl;
	while (go == 1)
	{
		cout << "Enter your string of less than 80 characters followed by an ENTER" << endl;
		cin.getline(s, 81, '\n');
		revString(s);
		cout << s << endl;
		cout << "Enter another? 1 = continue. Anything else to stop" << endl;
		cin >> go;
		getchar();
	}

	free (s);

	system("pause");
	return 0;
}

void revString(char* s)
{
	stack<char> rS;

	for (int i = 0; s[i] != '\0'; i++)
	{
		rS.push(s[i]);
	}

	for (int i = 0; !rS.empty(); i++)
	{
		s[i] = rS.top();
		rS.pop();
	}
}