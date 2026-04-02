// This program asks for a month and a year and
// displays how many days were in that month.
#include <iostream>
using namespace std;
int main()
{
	int choice, year;
	cout << "Enter a number corresponding to a month: ";
	cin >> choice;
	if (choice < 1 || choice > 12) // Limits the choice to a range of 1-12
		cout << "Invalide input, try again.";
	else
	{
		cout << "Enter a year: ";
		cin >> year;

		if (choice == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Equation to account for leap years
			cout << "That month had, or will have 29 days in it." << endl;
		else if
			(choice == 2)
			cout << "That month had, or will have 28 days in it." << endl;
		else if
			(choice == 4 || choice == 6 || choice == 9 || choice == 11)
			cout << "That month had, or will have 30 days in it." << endl;
		else
			cout << "That month had, or will have 31 days in it." << endl;
	}
	return 0;
}