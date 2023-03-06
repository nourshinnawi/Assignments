// Nour Shinnawi
// 3/17/18
// Lab 6: Nested Loops

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string studentName;
	int numTests, numStudents;
	float score, total, avg;

	// set up numeric formatting for output
	cout << fixed << showpoint << setprecision(1);

	// get the number of students
	cout << " How many students are in the class? Input a number between 1 and 30. ";
	cin >> numStudents;

	while (numStudents < 1 || numStudents > 30)
	{
		cout << "That number is not between 1 and 30. Please input another number ";
		cin >> numStudents;
	}
	// get the number of tests
	cout << "How many tests do you want to average? Input a number between 1 and 10. ";
	cin >> numTests;

	while (numTests < 1 || numTests > 10)
	{
		cout << "That number is not between 1 and 10. Please input another number ";
		cin >> numTests;
	}
		for (int student = 1; student <= numStudents; student++)  // this is the outer loop
		{
				cin.get();
				// get the student name
				cout << "Enter the student name ";
				getline(cin, studentName);
				// initialize accumulator OUTSIDE the inner loop
				total = 0;
			for (int test = 1; test <= numTests; test++)   // this is the inner loop	
			{
				cout << "Enter a score for test #" << test << ": ";
				cin >> score;
				total = total + score;  // accumulate score in total INSIDE the inner loop
										// total += score;
			}

			avg = total / numTests;  // calculate the average OUTSIDE the inner loop
			cout << studentName << "'s average = " << avg << endl;
	}

	return 0;
}