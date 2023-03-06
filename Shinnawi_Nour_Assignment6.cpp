// Nour Shinnawi
// 3/18/18
// Assignment 6: Multiplication Table

#include <iostream>
using namespace std;

int main()
{
	cout << "1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << "\n";
	cout << "___________________________________________________________________________" << "\n";
	
	int col, row;
	for (row = 1; row <= 10; row++)
	{
		for (col = 1; col <= 10; col++)
		{
			printf("%i\t", col*row); 
		}
		printf("\n\n");
	}
	getchar();

	return 0;
}