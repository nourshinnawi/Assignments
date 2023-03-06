// Nour Shinnawi
// 4/22/18
// Assignment #10: Arrays

#include <iostream>
#include <ctime>
using namespace std;

void printArray(int arr[], int size);
int countEvens(int arr[], int size);
void fillArray(int arr[], int size);

int main()
{
	srand(time(0));
	const int size = 25;
	int ar[size];

	fillArray(ar, 25);
	printArray(ar, 25);
	cout << "There are " << countEvens(ar, 25) << " even numbers in the array" << "\n";

	return 0;
}

void fillArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
}

int countEvens(int arr[], int size)
{
	int count = 0;
	for (int i = 0; i <= size - 1; i++) 
	{
		if (arr[i] % 2 == 0)
		{
			count++;
		}
	}
	return count;
}

void printArray(int arr[], int size)
{
	cout << "Printing the array" << "\n";

	for (int i = 0; i < size; i += 1)
		cout << arr[i] << "\n";
	{
		for (int i = 1; i <= 25; i++)
		{
			countEvens;
		}
	}
}