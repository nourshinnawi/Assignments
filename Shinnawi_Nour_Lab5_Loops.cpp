// Nour Shinnawi
// 3/10/18
// Lab #5: Loops

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double totalSales = 0.0 , sales = 0.0;
	cout << "Enter sales for the week. " << endl;

	for (int i = 0, i < 5; i++)
	{
		cout << "Enter sales amount for day " << i + 1 << " ";
		cin >> sales;
		totalSales += sales;
	}
	cout << fixed << setprecision(2);
	cout << "The sales total: $" << totalSales << endl;
	return 0;
}