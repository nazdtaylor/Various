//course: CS215-008
//Project: Lab Assignment 4
//Date: 2/13/15
//Purpose: Make a program that checks crdit card numbers.
//Author: Naz Taylor

#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int rem = 0;
	int odd = 0;
	int even = 0;
	int oddnum = 0;
	int odd2 = 0;
	int oddrem = 0;
	int check = 0;
	int chrem = 0;
	int dif = 0;
	int digit = 0;

	cout << "Please enter the 8-digit credit card number: ";
	cin >> num;

	digit = num % 10;

	for (int i = 0; i < 8; i ++)
	{
		rem = num % 10;
		num = num / 10;

		if (i == 0 || (i % 2) == 0)
		{
			even = even + rem;
		}

		else if (i % 2 != 0 || i == 1)
		{
			odd2 = rem * 2;

			if (odd2 >= 10)
			{
				oddrem = odd2 % 10;
				oddnum = odd2 / 10;

				odd = odd + oddrem + oddnum;
			}
			else
			{
				odd = odd + rem * 2;
			}
		}
	}
	
	check = even + odd;	
	
	if (check % 10 == 0)
		{
			cout << "Number is valid" << endl;
		}

	else
	{
		chrem = check % 10;
		dif = 10 - chrem;
		
		if (chrem > 5)
		{
			digit = digit - dif;
		}
		else
		{
			digit = digit - dif;
		}

		cout << "Number is invalid" << endl;
	}

	cout << "Check digit should have been " << digit << endl;
	
	system("pause");
	return 0;
	}