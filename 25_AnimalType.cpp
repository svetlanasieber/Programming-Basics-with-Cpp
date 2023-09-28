// 03.AnimalType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string animal,result;
	cin >> animal;

	if (animal == "dog")
	{
		result = "mammal";
	}
	else if (animal == "crocodile" || animal =="tortoise" || animal == "snake")
	{ 
		result = "reptile";
	}
	else
	{
		result = "unknown";
	}

	cout << result << endl;
	return 0;
}