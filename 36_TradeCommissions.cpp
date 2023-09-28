// 12.TradeCommissions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string town;
	double sales;
	cin >> town >> sales;

	double ratio[3][4] = {
	{5 , 7 , 8 , 12 },
	{4.5 , 7.5 , 10 , 13},
    {5.5 , 8 , 12 , 14.5}
	};

	int i = -1, j = -1;

	if (town == "Sofia") i = 0;
	else if (town == "Varna") i = 1;
	else if (town == "Plovdiv") i = 2;

	if (sales < 0) i = -1;
	else if (sales <= 500) j = 0;
	else if (sales <= 1000) j = 1;
	else if (sales <= 10000) j = 2;
	else j = 3;

	if (i==-1 || j == -1)
	{
		cout << "error" << endl;
	}
	else
	{
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << ratio[i][j] * sales*0.01 << endl;
	}
	
	return 0;
}