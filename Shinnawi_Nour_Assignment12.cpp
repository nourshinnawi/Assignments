// Nour Shinnawi
// 5/7/18
// Assignment #12: Searching and Sorting

#include <iostream>
using namespace std;

void sortScores(int scores[], int size);
void displayScores(const int scores[], int size);

int main()
{
	const int size = 5;
	int scores[size];

	cout << "Enter 5 scores: " << "\n";
	for (int i = 0; i < size; ++i)
	{
		cin >> scores[i];
	}
	
		sortScores(scores, size);
		displayScores(scores, size);

	return 0;
}

void sortScores(int scores[], int size)
{
	int startScan, maxIndex, maxValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		maxIndex = startScan;
		maxValue = scores[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (scores[index] > maxValue)
			{
				maxValue = scores[index];
				maxIndex = index;
			}
		}
		scores[maxIndex] = scores[startScan];
		scores[startScan] = maxValue;
	}
}

void displayScores(const int scores[], int size)
{
	cout << "\n";
	cout << "THE TOP SCORES:" << "\n";

	for (int i = 0; i < size; i += 1)
	{
		cout << i + 1 << ": " << scores[i] << "\n";
	}
	cout << "\n";
}