// Nour Shinnawi
// 5/29/18
// Assignment #15: Structs

#include <iostream>
#include <string>
using namespace std;

struct Leads
{
	string name;
	bool active = true;
	int budget;
};

Leads enterLeads(Leads x);
void display(Leads x, int leadAmount);

int main()
{
	
	Leads *lead = nullptr;
	int leadAmount = 3;
	char active = 0;

	lead = new Leads [leadAmount];
	
	for (int i = 0; i < leadAmount; i++)
	{
		lead[i] = enterLeads(lead[i]);
	}

		display(*lead, leadAmount);

	delete[]lead;

	return 0;
}
Leads enterLeads(Leads x)
{
	cout << "Enter the name of the lead: ";
	cin >> x.name;

	cout << "Is the lead active? ";
	cin >> x.active;

		if (x.active == 'Y' || x.active == 'y')
		{
			x.active == true;
		}
		if (x.active == 'N' ||x.active == 'n')
		{
			x.active == false;
		}
		
	cout << "Enter the budget: ";
	cin >> x.budget;
	cout << "\n";

	return x;
}
void display(Leads x, int leadAmount)
{
	char answer;

		cout << "Would you like to view the active leads only? ";
		cin >> answer;

		for (int i = 0; i < leadAmount; i++)
		{
			if ((answer == 'Y' || answer == 'y') && x.active == true)
			{
				cout << "Lead name: " << x.name << "\n";
				cout << "Lead activity: " << x.active << "\n";
				cout << "Lead budget: $" << x.budget << "\n";
				cout << "\n";
			}
			if (answer == 'N' || answer == 'n')
			{
				cout << "Lead name: " << x.name << "\n";
				cout << "Lead activity: " << x.active << "\n";
				cout << "Lead budget: $" << x.budget << "\n";
				cout << "\n";
			}

		}

		/*if ((answer == 'Y' || answer == 'y') && x.active == true)
		{
			cout << "Lead name: " << x.name << "\n";
			cout << "Lead activity: " << x.active << "\n";
			cout << "Lead budget: $" << x.budget << "\n";
			cout << "\n";
		}
		if (answer == 'N' || answer == 'n')
		{
			cout << "Lead name: " << x.name << "\n";
			cout << "Lead activity: " << x.active << "\n";
			cout << "Lead budget: $" << x.budget << "\n";
			cout << "\n";
		}*/

}