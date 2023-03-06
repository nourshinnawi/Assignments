// Nour Shinnawi
// 4/21/18
// Lab #10: Arrays

#include <iostream>
#include <ctime>
using namespace std;

void printList(int arr[], int size);

int main()
{
	srand(time(0));
	const int size = 5;
	int ar[size];

	cout << ar << "\n";
	for (int i = 0; i < size; i++)
	{
		ar[i] = rand() % 3 + 1;
	}

	printList(ar, size);

	return 0;
}
void printList(int arr[], int size)
{
	cout << arr << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\n";
	}
}