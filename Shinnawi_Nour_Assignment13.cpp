// Nour Shinnawi
// 5/12/18
// Assignment #13: Vectors

#include <iostream>
#include <vector>
using namespace std;

void sortScores(vector<int> &);
void displayScores(vector<int>);

int main()
{
	vector<int> scores(5);

	cout << "Enter 5 scores: " << "\n";
	for (int i = 0; i < 5; ++i)
	{
		cin >> scores[i];
	}

	sortScores(scores);
	displayScores(scores);

	return 0;
}

void sortScores(vector<int> &scores)
{
	int startScan, maxIndex, maxValue, size;

	size = scores.size();
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

void displayScores(vector<int> scores)
{
	cout << "\n";
	cout << "THE TOP SCORES:" << "\n";

	for (int i = 0; i < 5; i += 1)
	{
		cout << i + 1 << ": " << scores[i] << "\n";
	}
	cout << "\n";
}