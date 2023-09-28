#include <iostream>

using namespace std;

int main()
{
	double speed;

	cin >> speed;

	if (speed <= 10)
	{
		cout << "slow";
	}
	else if (speed > 10 && speed <= 50)
	{
		cout << "average";
	}
	else if (speed > 50 && speed <= 150)
	{
		cout << "fast";
	}
	else if (speed > 150 && speed <= 1000)
	{
		cout << "ultra fast";
	}
	else
	{
		cout << "extremely fast";
	}
}