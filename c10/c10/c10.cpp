// Dylan Travers
// 10/5/2013
// CIT-245: Data Structures and Programming C++
// Chapter 10 Homework - Due 10/6/2013

#include <iostream>
#include <cstdlib>

using namespace std;


class WrapArrayDeep
{
public:
	WrapArrayDeep()
	{
		pca = new char[5];
		*pca = 97;
		*(pca + 1) = 98;
		*(pca + 2) = 99;
		*(pca + 3) = 100;
		*(pca + 4) = 101;
	}
	WrapArrayDeep(const WrapArrayDeep& wad)
	{
		pca = new char[5];
		for (int i = 0; i < 5; i++)
		{
			pca[i] = wad.pca[i];
		}
	}
	~WrapArrayDeep()
	{
		cout << "calling destructor for WrapArrayDeep" << endl;
		delete[] pca;
	}
	void setArray(char charA, char charB, char charC, char charD, char charE)
	{
		*pca = charA;
		*(pca + 1) = charB;
		*(pca + 2) = charC;
		*(pca + 3) = charD;
		*(pca + 4) = charE;
	}
	void printArray()
	{
		for (int i = 0; i < 5; i++)
			cout << pca[i] << " ";
		cout << endl;
	}
private:
	char* pca;
};

class WrapArrayShallow
{
public:
	WrapArrayShallow()
	{
		pca = new char[5];
		pca[0] = 'v';
		pca[1] = 'w';
		pca[2] = 'x';
		pca[3] = 'y';
		pca[4] = 'z';
	}
	~WrapArrayShallow()
	{
		cout << "calling destructor for WrapArrayShallow (deletion commented out)" << endl;
		// delete[] pca;
	}
	void setArray(char charA, char charB, char charC, char charD, char charE)
	{
		pca[0] = charA;
		pca[1] = charB;
		pca[2] = charC;
		pca[3] = charD;
		pca[4] = charE;
	}
	void printArray()
	{
		for (int i = 0; i < 5; i++)
			cout << *(pca + i) << " ";
		cout << endl;
	}
private:
	char* pca;
};


void part1();

void part2();


int main()
{
	part1();
	part2();

	system("pause");
	return 0;
}

void part1()
{
	cout << "===Part 1===" << endl;
	cout << "This program section uses 3 variables" << endl;
	cout << "i = 7, pi a pointer to i, and ppi a pointer to pi." << endl << endl;

	int i = 7;
	i = 7;
	cout << "i = " << i << endl;
	cout << "address of i:             " << &i << endl << endl;

	int *pi;
	pi = &i;
	cout << "pi = " << pi << endl;
	cout << "address of pi:            " << &pi << endl;
	cout << "dereference of pi:        " << *pi << endl << endl;

	int **ppi;
	ppi = &pi;
	cout << "ppi = " << ppi << endl;
	cout << "address of ppi:           " << &ppi << endl;
	cout << "dereference of pi:        " << *ppi << endl;
	cout << "double dereference of pi: " << **ppi << endl << endl << endl;
}

void part2()
{
	cout << "===Part 2===" << endl;
	cout << "This section instantiates a wrapper class for a dynamic array of 5 elements." << endl << endl;
	
	WrapArrayDeep wad1;
	cout << "WrapArrayDeep 1" << endl;
	wad1.printArray();

	WrapArrayDeep wad2(wad1);
	cout << "WrapArrayDeep 2 created using the copy constructor on 1" << endl;
	wad2.printArray();

	wad1.setArray('{', '|', '}', '~', '@');
	cout << "After changing the contents of WrapArrayDeep 1, 1 and 3 = " << endl;
	wad1.printArray();
	wad2.printArray();

	cout << endl << "Now doing the same thign with WrapArrayShallow" << endl << endl;

	WrapArrayShallow was1;
	cout << "WrapArrayShallow 1" << endl;
	was1.printArray();

	WrapArrayShallow was2(was1);
	cout << "WrapArrayShallow 2 created using the copy constructor on 1" << endl;
	was2.printArray();

	was1.setArray('{', '|', '}', '~', '@');
	cout << "After changing the contents of WrapArrayShallow 1, 1 and 3 = " << endl;
	was1.printArray();
	was2.printArray();
}