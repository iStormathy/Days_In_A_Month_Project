#include <iostream>
using namespace std;
int main()
{
	int days, choice, year;
	cout << "Enter a number corresponding to a month: ";
	cin >> choice;
	if (choice < 1 || choice > 12)
		cout << "Invalide input, try again.";
	else
	{
		cout << "Enter a year: ";
		cin >> year;

		if (choice == 1 || choice == 3 || choice == 5 || choice == 7
			|| choice == 8 || choice == 10 || choice == 12)
			days = 31;
		else if
			(choice == 4 || choice == 6 || choice == 9 || choice == 11)
			days = 30;
		else if
			(choice == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			days = 29;
		else
			days = 28;
		cout << "That month had, or will have, " << days << " days in it." << endl;
	}
	return 0;
}