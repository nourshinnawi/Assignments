// Nour Shinnawi
// 4/14/18
// Lab 9: Files

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void saveData(string n, string h, string l);

int main()
{
	string playerName;
	string Health;
	string Level;

	getline(cin, playerName);
	getline(cin, Health);
	getline(cin, Level);

	saveData(playerName, Health, Level);

	ifstream inFile;
	string a;
	string h;
	string l;

	inFile.open("data.txt");

	getline(inFile, a);
	inFile >> h;
	inFile >> l;

	cout << "Name:" << a << "\n";
	cout << "Health: " << h << "\n";
	cout << "Level: " << l << "\n";

	return 0;
}
void saveData(string n, string h, string l)
{
	ofstream outFile;
	outFile.open("data.txt");

	outFile << n << "\n";
	outFile << h << "\n";
	outFile << l << "\n";
	outFile.close();
}