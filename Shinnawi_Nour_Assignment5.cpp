// Nour Shinnawi
// 3/10/18
// Assignment 5: Loops

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int number;
	int guess;
	int attempts = 0;
	srand(time(0));
	number = rand() % 501 + 1;

	cout << "Welcome to the Random Number Guessing Game" << "\n";
	cout << "\n";

		do {

		cout << "Please enter a number that is between 1 and 500: " << "\n";
		cin >> guess;

		if (guess < number)
		{
			cout << "Too low, try again" << "\n";
			attempts++;
		}
		else if (guess > number)
		{
			cout << "Too high, try again" << "\n";
			attempts++;
		}
		else
		{
			cout << "Condgradulations, your guess is correct. It took you " << attempts << " tries to get it right." << "\n";
		}
	} while (guess != number);

	return 0;
}