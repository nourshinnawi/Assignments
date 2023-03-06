// Nour Shinnawi
// 3/4/2018
// Assignment 4: Text Adventure

#include <iostream>
using namespace std;

int main()
{
	char choice;

	cout << "You come home from a long day of work as a secret agent and decide to relax. ";
	cout << "Would you like to turn the T.V. on? " << "\n";
	cin >> choice;


	if (choice == 'y' || choice == 'Y')
	{
		cout << "You try to turn on the T.V. but there aren't any batteries in the remote. ";
		cout << "Would you like to search for batteries?" << "\n";
		cin >> choice;

		if (choice == 'y' || choice == 'Y')
		{
			cout << "You search the entire house for batteries but can't find any. ";
			cout << "You return to the living room to and notice that there is a sound coming from the T.V. ";
			cout << "You look under the T.V. and find a bomb with a timer that says there are thirty seconds left until it explodes. ";
			cout << "So you run out of the house in time to see it blow up." << "\n";
			cout << "\n";
			cout << "GAME OVER" << "\n";

			return 0;
		}
		else (choice == 'n' || choice == 'N');
		cout << "Instead of searching for batteries you notice that there is a sound coming from the living room. ";
		cout << "You search around and find a bomb under the couch. The bomb has a timer that has twenty minutes until it explodes. ";
		cout << "You save your house from blowing up by rewiring the bomb." << "\n";
		cout << "\n";
		cout << "YOU WIN" << "\n";

		return 0;
	}

	{
		if (choice == 'n' || choice == 'N');
		{
			cout << "Instead of watching T.V. you go into the kitchen to make some food. ";
			cout << "But before you can begin cooking you notice that there is a sound coming from the fridge. ";
			cout << "Would you like to investigate it?" << "\n";
			cin >> choice;

			if (choice == 'y' || choice == 'Y')
			{
				cout << "You open the fridge and find a bomb inside with a timer. ";
				cout << "The timer has ten minutes remaining until the bomb explodes. ";
				cout << "You are able to save your house from blowing up by stoping the bomb from exploding.";
				cout << "\n";
				cout << "YOU WIN!!" << "\n";
				return 0;
			}
			else (choice == 'n' || choice == 'N');
			{
				cout << "You ignore the sound and continue to make dinner, but suddenly you get a call from your boss. ";
				cout << "They explain that someone has placed a bomb into the fridge and that it is going to explode in thrity seconds. ";
				cout << "So you rush out of the house in time to watch it blow up your house." << "\n";
				cout << "\n";
				cout << "GAME OVER" << "\n";
				return 0;
			}

		}
	}

	return 0;
}