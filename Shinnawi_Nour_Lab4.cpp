// Nour Shinnawi
// 3/7/18
// Lab #4

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string name;
	int test1, test2, test3, number;
	float avg;
	char grade;
	char choice;
	bool isActive;  // evaluates to true or false

	const string A_COMMENT = "A_GRADE";
	const string B_COMMENT = "B_GRADE";
	const string C_COMMENT = "C_GRADE";
	const string D_COMMENT = "D_GRADE";
	const string F_COMMENT = "F_GRADE";
	const string ERROR_COMMENT = "x";

	const float A_GRADE = 90.00;
	const float B_GRADE = 80.00;
	const float C_GRADE = 70.00;
	const float D_GRADE = 60.00;
	//const float F_Grade = 50.00;

	cout << "User, enter your student identification number: ";
	cin >> number;
	isActive = true;

	cout << "User, enter your name: ";
	cin.ignore();
	getline(cin, name);

	cout << "Is " << (cin, name) << ", student number: " << number << ", currently active? <y / n>" << "\n";
	cin >> choice;
	
	if (choice == 'y' || choice == 'Y')
	{
		cout << "To calculate your grade please enter three test scores between 0 and 100: ";
		cin >> test1 >> test2 >> test3;

		avg = (test1 + test2 + test3) / 3.0;

		cout << fixed << showpoint << setprecision(1);
		cout << name << "'s average = " << avg << endl;

		if ((avg >= A_GRADE) && (isActive))
		{
			grade = 'A';
			cout << "Congratulations! You are awesome. \n";
		}
		else if ((avg >= B_GRADE) && (isActive))
		{
			grade = 'B';
			cout << "Good job. You are brilliant. \n";
		}
		else if ((avg >= C_GRADE) && (isActive))
		{
			grade = 'C';
			cout << "Adequate. You passed the course. \n";
		}
		else if ((avg >= D_GRADE) && (isActive))
		{
			grade = 'D';
			cout << "You did not earn a passing grade. See a tutor for help.\n";
		}
		else if ((avg >= 0) && (isActive))  // catches any average between 0 and 59
		{
			grade = 'F';
			cout << "You failed the course.\n";
		}
		else
		{
			grade = 'x';
			cout << " INVALID LOGIC. CHECK YOUR CODE. \n";
		}

		cout << "You earned a grade of " << grade << " in the course. \n";
		cout << "Please see your counselor to register for next semester. \n";
	}
	else
	{
		cout << "Currently, there is no grade available for " << (cin, name) << ", student number: " << number << ".\n";
	}
	return 0;
}