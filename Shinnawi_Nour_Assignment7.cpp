// Nour Shinnawi
// 3/26/18
// Assignment 7: Functions Drop Low Score

#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int test1, test2, test3, test4, test5;

	getScore(test1);
	getScore(test2);
	getScore(test3);
	getScore(test4);
	getScore(test5);

	calcAverage(test1, test2, test3, test4, test5);
	return 0;
}
void getScore(int & score)
{
	cout << "Enter a test score that is between 1 and 100" << "\n";
	cin >> score;

	if (score < 0 || score > 100)
	{
		cout << "That number is not valid. Please enter a number that is between 1 and 100" << "\n";
		cin >> score;
	}
}
void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
	int sum;
	int lowest;
	double average;

	lowest = findLowest(score1, score2, score3, score4, score5);

	sum = score1 + score2 + score3 + score4 + score5 - lowest;
	average = sum / 4.0;

	cout << setw(4) << fixed << showpoint << setprecision(2);
	cout << "The average is: " << average << "\n";
	cout << "\n";
}
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	int lowest = score1;

	if (score2 < lowest)
	{
		lowest = score2;
	}
	if (score3 < lowest)
	{
		lowest = score3;
	}
	if (score4 < lowest)
	{
		lowest = score4;
	}
	if (score5 < lowest)
	{
		lowest = score5;
	}

	cout << "\n";
	cout << "The lowest score is: " << lowest << "\n";
	cout << "\n";
	return lowest;
}