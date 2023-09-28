#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n>= -100 && n<=100 && n !=0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
