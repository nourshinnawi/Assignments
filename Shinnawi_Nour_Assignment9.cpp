// Nour Shinnawi
// 4/15/18
// Assignment 9: Verify Login
// This assignment is practice for using files

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Login();
bool CheckCredentials(string username, string password);

int main()
{
	Login();

	return 0;
}

bool CheckCredentials(string username, string password)
{
	string user;
	string pass;

	bool status = false;

	ifstream inFile;
	inFile.open("CorrectData.txt");

	if (inFile)
	{
		{
			inFile >> user >> pass;
			if (username == user && password == pass)
			{
				status = true;
			}
			else
			{
				status = false;
			}
		}
	}
	inFile.close();

	return status;
}

void Login()
{
	string username;
	string password;
	int attempts = 3;

	do
	{
		cout << "Login" << "\n";
		cout << "\n";
		cout << "Username: ";
		cin >> username;
		cout << "\n";
		cout << "Password: ";
		cin >> password;

		attempts = attempts--;

		if (CheckCredentials(username, password) == true)
		{
			cout << "Login sucessful!" << "\n";
		}
		else
		{
			if (attempts > 0)
			{
				cout << "Invalid username or password. ";
				cout << "You have " << attempts << " attempts remaining." << "\n";
			}
			else
			{
				cout << "Attempts exceeded." << "\n";
			}
		}
	} 
	while (attempts > 0 && CheckCredentials(username, password) != true);
}

