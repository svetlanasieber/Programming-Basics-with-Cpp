#include <iostream>

using namespace std;

int main() {
    int chicken_count, fish_count, vegetarian_count;

    cin >> chicken_count >> fish_count >> vegetarian_count;

    double menus_price =
        (chicken_count * 10.35) + (fish_count * 12.4) + (vegetarian_count * 8.15);

    double desert_price = 0.2 * menus_price;

    double total_price = menus_price + desert_price + 2.5;

    cout << total_price << endl;
    return 0;
}