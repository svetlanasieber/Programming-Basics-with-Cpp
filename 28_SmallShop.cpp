// 05.SmallShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string product, town;
	double amount;

	cin >> product >> town >> amount;

	double prices[3][5] = {
		{0.50, 0.80, 1.20, 1.45, 1.60},
		{0.40, 0.70, 1.15, 1.30, 1.50},
		{0.45, 0.70, 1.10, 1.35, 1.55} };

	int i, j;
	if (town == "Sofia")
		i = 0;
	else if (town == "Plovdiv")
		i = 1;
	else i = 2;

	if (product == "coffee")
		j = 0;
	else if (product == "water")
		j = 1;
	else if (product == "beer")
		j = 2;
	else if (product == "sweets")
		j = 3;
	else j = 4;

	cout << prices[i][j] * amount<<endl;
	return 0;
}
