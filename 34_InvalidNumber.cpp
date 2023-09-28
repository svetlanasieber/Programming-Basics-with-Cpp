// 10.InvalidNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;

	if (num>= 100 && num <= 200 || num ==0)
	{
		return 0;
	}
	cout << "invalid" << endl;
	return 0;
}