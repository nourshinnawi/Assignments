// Nour Shinnawi
// Assignment #2: Laser Wars Cantina
// 2/25/18

#include <iostream>
#include <iomanip>
#include "Shinnawi_Nour_Assignment2.h"
using namespace std;

int main()
{
	double Food, Tax, Tip, Total, A, B;

	A = .08;
	B = .20;
	
	cout << "Enter the bill total" 
		"\n"
		"\n";
	cin >> Food;
	cout << "Welcome to Laser Wars Cantina. Home of that one song."
		"\n"
		"\n";
	cout << "Food Items ........... $" << Food << "\n";
	Tax = Food * A;
	cout << "Tax 8% ................$" << Tax << "\n";
	Tip = Food * B;
	cout << "Tip 20% ...............$" << Tip << "\n"
		"\n";
	Total = Food + Tax + Tip;
	cout << fixed << setprecision(2);
	cout << "Total                  $" << Total << "\n";
	return 0;
}