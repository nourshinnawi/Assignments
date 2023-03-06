// Nour Shinnawi
// Lab 8: Functions with Reference Paramaters
// 3/30/18

#include <iostream>
using namespace std;

void functionOne(int &number);

int main()
{
	int number = 1;
	
	cout << "The value of number is: " << number << "\n";
	cout << "Memory address of number inside main: " << &number << "\n";
	functionOne(number);
	cout << "The value of number is: " << number << "\n";

	return 0;
}

void functionOne(int &number)
{
	number = 5;
	cout << "The value of number is:" << number << "\n";
	cout << "Memory address of number inside function: " << &number << "\n";
}