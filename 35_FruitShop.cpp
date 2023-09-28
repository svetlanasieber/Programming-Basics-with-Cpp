// 11.FruitShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string fruit, day;
	cin >> fruit >> day;

	double quantity;
	cin >> quantity;


	double prices[2][7] = {
	{2.50, 1.20, 0.85, 1.45, 2.70, 5.50, 3.85},
	{2.70, 1.25, 0.90, 1.60, 3.00, 5.60, 4.20}
	};
	
	int i = -1;
	if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") i = 0;
	else if (day == "Saturday" || day == "Sunday") i = 1;

	int  j = -1;
	if (fruit == "banana") j = 0;
	else if (fruit == "apple") j = 1;
	else if (fruit == "orange") j = 2;
	else if (fruit == "grapefruit") j = 3;
	else if (fruit == "kiwi") j = 4;
	else if (fruit == "pineapple") j = 5;
	else if (fruit == "grapes") j = 6;

	if (i==-1 || j==-1)
	{
		cout << "error" << endl;
	}
	else
	{
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << prices[i][j] * quantity << endl;
	}

	return 0;
}