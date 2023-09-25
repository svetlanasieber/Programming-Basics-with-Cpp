#include <iostream>

using namespace std;

int main()
{
	int initialScore;
	cin >> initialScore;

	double bonus = 0;

	if (initialScore <= 100)
	{
		bonus += 5;
	}
	else if (initialScore <= 1000)
	{
		bonus += initialScore * 0.2;
	}
	else
	{
		bonus += initialScore * 0.1;
	}

	if (initialScore % 2 == 0)
	{
		bonus += 1;
	}
	else if (initialScore % 5 == 0)
	{
		bonus += 2;
	}
	
	double finalScore = initialScore + bonus;

	cout << bonus << endl;
	cout << finalScore << endl;
	return 0;
}