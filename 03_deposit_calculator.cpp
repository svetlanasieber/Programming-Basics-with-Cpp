#include <iostream>

using namespace std;

int main()
{
	double deposited_sum;
	cin >> deposited_sum;

	int months;
	cin >> months;

	double interest;
	cin >> interest;

	double sum = deposited_sum + months * ((deposited_sum * (interest / 100)) / 12);

	cout << sum << endl;
	return 0;
}