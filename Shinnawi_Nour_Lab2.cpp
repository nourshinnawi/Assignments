// Lab 2
// Nour Shinnawi
// 2/19/18

// This program determines the size of integers, long
// integers, and long doubles.

#include <iostream>
using namespace std;

int main()
{
	long double apple;
	float avg = 3.85;
	double milesToSun = 5878746.87;

	cout << "The size of an integer is " << sizeof(int);
	cout << " bytes.\n";

	cout << "The size of a long integer is " << sizeof(long);
	cout << " bytes.\n";

	cout << "The size of a float is " << sizeof(avg);
	cout << " bytes.\n";

	cout << "The size of a double is " << sizeof(milesToSun);
	cout << " bytes.\n";

	cout << "An apple can be eaten in " << sizeof(apple);
	cout << " bytes!\n";

	cout << "Avg = " << avg << endl;
	cout << "Miles to Sun = " << milesToSun << endl;

	return 0;
}