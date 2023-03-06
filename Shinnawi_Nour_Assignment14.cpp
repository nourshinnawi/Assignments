// Nour Shinnawi
// 5/21/18
// Assignment #14: Pointers

#include <iostream>
using namespace std;

int daysWorked();
double *hoursWorked(int days, double *hours);
int pay();
double hourAmount(int days, double *hours);
void displayResults(double totalHours, double earnings);

int main()
{
	double *hours;
	double totalHours;
	double earnings;
	int days;
	int count;
	int payRate;

	days = daysWorked();

	hours = new double[days];

	hoursWorked(days, hours);
	payRate = pay();
	totalHours = hourAmount(days, hours);

	earnings = totalHours * payRate;

	displayResults(totalHours, earnings);

	delete[] hours;

	return 0;
}

int daysWorked()
{
	int days;
	cout << "How many days did you work?" << "\n";
	cin >> days;
	cout << "\n";

	return days;
}

double *hoursWorked(int days, double *hours)
{
	int count;

	for (count = 0; count < days; count++)
	{
		cout << "Hours worked on day #" << (count + 1) << ": ";
		cin >> hours[count];
	}

	return hours;
}

int pay()
{
	int payRate;
	cout << "\n";
	cout << "How much do you make per hour?" << "\n";
	cin >> payRate;
	cout << "\n";

	return payRate;
}

double hourAmount(int days, double *hours)
{
	double totalHours = 0;
	int count;
	for (count = 0; count < days; count++)
	{
		totalHours += hours[count];
	}

	return totalHours;
}

void displayResults(double totalHours, double earnings)
{
	cout << "Total Hours worked: " << totalHours << "\n";
	cout << "Total earnings are: $" << earnings << "\n";
	cout << "\n";
}