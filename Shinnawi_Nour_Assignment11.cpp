// Nour Shinnawi
// 4/30/18
// Assignment #11: 2D Arrays Quarterly Sales

#include <iostream>
#include <iomanip>
using namespace std;

void openingMessage();
void getInput(double sales[3][4], int NUM_DIVS, int NUM_QTRS);
double calcTotal(double sales[][4], int NUM_DIVS, int NUM_QTRS);
void displayResults(double totalSales);

int main()
{
	const int NUM_DIVS = 3;
	const int NUM_QTRS = 4;
	double sales[NUM_DIVS][NUM_QTRS];
	double totalSales;

	openingMessage();
	getInput(sales, NUM_DIVS, NUM_QTRS);
	totalSales = calcTotal(sales, NUM_DIVS, NUM_QTRS);
	displayResults(totalSales);

	return 0;
}

void openingMessage()
{
	cout << "This program will calculate the total sales of \n";
	cout << "all the company's divisions.\n";
	cout << "Enter the following sales information: \n\n";
}

void getInput(double sales[3][4], int NUM_DIVS, int NUM_QTRS)
{
	for (int div = 0; div < NUM_DIVS; div++)
	{
		for (int qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			cout << "Division " << (div + 1);
			cout << ", Quarter " << (qtr + 1) << ": $";
			cin >> sales[div][qtr];
		}
		cout << "\n";
	}
	return;
}

double calcTotal(double sales[][4], int NUM_DIVS, int NUM_QTRS)
{
	double totalSales = 0;

	for (int div = 0; div < NUM_DIVS; div++)
	{
		for (int qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			totalSales += sales[div][qtr];
		}
	}
	return totalSales;
}

void displayResults(double totalSales)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales for the company are: $";
	cout << totalSales << "\n";
}