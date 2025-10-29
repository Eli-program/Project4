// Project4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int month = 0;
	cout << "Enter month number (1-12): ";
	cin >> month;
	int year = 0;
	cout << "Enter year: ";
	cin >> year;

	if (year / 100)
		{
		if (month == 2)
		{
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				cout << "29 days" << endl;
				cout << "This is a leap year." << endl;
			}
			else
			{
				cout << "28 days" << endl;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			cout << "30 days" << endl;
		}
		else
		{
			cout << "31 days" << endl;
		}
	}
	else
	{
		cout << "Invalid year input." << endl;
	}
		
}


