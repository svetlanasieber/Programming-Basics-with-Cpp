#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int time1, time2, time3;
	cin >> time1 >> time2 >> time3;

	int totalTime = time1 + time2 + time3;
	int hours = round(totalTime / 60);

	int minutes = totalTime % 60;

	if (minutes < 10)
	{
		cout << hours << ":0" << minutes << endl;
	}
	else
	{
		cout << hours << ':' << minutes << endl;
	}
	
	return 0;
}
