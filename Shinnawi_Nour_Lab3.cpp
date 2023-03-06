// Nour Shinnawi
// Lab 3: Cin and Arithmetic Expression
// 2/25/28

#include <iostream>
#include <cmath>
# include <iomanip>
using namespace std;

int main()
{
	double base, exponet, result;

	cout << "User, enter in a base." << endl;
	cin >> base;

	cout << "Next, enter in the power of exponet value" << endl;
	cin >> exponet;
	
	cout << "The answer is ";

	result = pow(base, exponet);

	cout << result << endl;

	cout << fixed << setprecision(2);
	cout << sqrt(result) << " is the square root of the exponet and base."
		"\n";

	return 0;
}