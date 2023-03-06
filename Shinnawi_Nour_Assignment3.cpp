// Nour Shinnawi
// Assignment #3: quadratic Equation
// 2/25/18

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, d, e, f;
	a = 1;
	b = -3;
	c = -10; 
	d = b*b - 4 * a * c;
	if (d >= 0);
	{
		e = (-b + sqrt(d)) / (2 * a);
		f = (-b - sqrt(d)) / (2 * a);
		cout << "The roots are " << e << " and " << f << "\n";
	}
		return 0;
}