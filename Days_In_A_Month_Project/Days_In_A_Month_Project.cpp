// This program asks for a month and a year and
// displays how many days were in that month.
#include <iostream>
using namespace std;
int main()
{
	int days, choice, year;
	cout << "Enter a number corresponding to a month: ";
	cin >> choice;
	if (choice < 1 || choice > 12) // Limits the choice to a range of 1-12
		cout << "Invalide input, try again.";
	else
	{
		cout << "Enter a year: ";
		cin >> year;

		if (choice == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Equation to account for leap years
			days = 29;
		else if
			(choice == 2)
			days = 28;
		else if
			(choice == 4 || choice == 6 || choice == 9 || choice == 11)
			days = 30;
		else
			days = 31; // Default number, since there are more months with 31 days than not.
		cout << "That month had, or will have, " << days << " days in it." << endl;
	}
	return 0;
}