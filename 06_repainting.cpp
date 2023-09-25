#include <iostream>

using namespace std;

int main() {
    int nylon, paint, thinner, work_hours;

    cin >> nylon >> paint >> thinner >> work_hours;

    double new_paint = paint * 1.1;

    int new_nylon = nylon + 2;

    double nylon_price = new_nylon * 1.5;

    double paint_price = new_paint * 14.5;

    double thinner_price = thinner * 5.0;

    double materials_price = nylon_price + paint_price + thinner_price + 0.4;

    double work_price = (0.3 * materials_price) * work_hours;

    double total_price = materials_price + work_price;

    cout << total_price << endl;
    return 0;
}