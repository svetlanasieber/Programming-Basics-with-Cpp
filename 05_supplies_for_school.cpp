#include <iostream>

using namespace std;

int main() {
	int pens_count, markers_count, detergent_liters, discount_percent;
	cin >> pens_count >> markers_count >> detergent_liters >> discount_percent;

	double total_price =
		(pens_count * 5.8) + (markers_count * 7.2) + (detergent_liters * 1.2);

	double discount = total_price * (discount_percent / 100.0);

	total_price = total_price - discount;
	cout << total_price << endl;
	return 0;
}