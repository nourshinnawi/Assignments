// Nour Shinnawi
// 3/26/18
// Lab 7: Functions

#include <iostream>
#include <string>
using namespace std;


float calcAvg(float test1, float test2, float test3);
char calcGrade(float avg);
void displayResults(string name, float avg, char grade);


int main()
{
	string name;
	float test1;
	float test2;
	float test3;
	float calcAvg(float test1, float test2, float test3);
	char calcGrade(float avg);
	char grade;

	cout << "Student, please enter your name: " << "\n";
	cin >> name;
	cout << "For test one, enter a score that is between 1 and 100: ";
	cin >> test1;
	cout << "For test two, enter a score that is between 1 and 100: ";
	cin >> test2;
	cout << "For test three, enter a score that is between 1 and 100: ";
	cin >> test3;

	float avg = calcAvg(test1, test2, test3);
	grade = calcGrade(avg);
	displayResults(name, avg, grade);

	return 0;
}
float calcAvg(float test1, float test2, float test3)
{
	float average = (test1 + test2 + test3) / 3;
	return average;
}

char calcGrade(float avg)
{
	char grade;
		if (avg >= 90 && avg <= 100)
		{
			grade = 'A';
			cout << "A" << "\n";
		}
		if (avg >= 80 && avg <= 89)
		{
			grade = 'B';
			cout << "B" << "\n";
		}
		if (avg >= 70 && avg <= 79)
		{
			grade = 'C';
			cout << "C" << "\n";
		}
		if (avg >= 60 && avg <= 69)
		{
			grade = 'D';
			cout << "D" << "\n";
		}
		if (avg >= 0 && avg <= 59)
		{
			grade = 'F';
			cout << "F" << "\n";
		}
		return grade;
}
void displayResults(string name, float avg, char grade)
{
	cout << "" << name << ", your average is a " << avg << " and your grade is an " << grade << "\n";
}
