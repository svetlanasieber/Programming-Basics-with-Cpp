#include <iostream>

using namespace std;


int main()
{
	double sqareMeters;

	cin >> sqareMeters;

	double areaPrice = sqareMeters * 7.61;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "The final price is: " << areaPrice - (areaPrice * 0.18) << " lv." << endl;
	cout << "The discount is: " << areaPrice * 0.18 << " lv." << endl;

	return 0;
}