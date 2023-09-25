#include <iostream>

using namespace std;

int main() {
  double holiday_price;
  int puzzles_count, dolls_count, bears_count, minions_count, trucks_count;

  cin >> holiday_price >> puzzles_count >> dolls_count >> bears_count >>
      minions_count >> trucks_count;

  int toys_count =
      puzzles_count + dolls_count + bears_count + minions_count + trucks_count;

  double price = (puzzles_count * 2.6) + (dolls_count * 3) +
                 (bears_count * 4.1) + (minions_count * 8.2) +
                 (trucks_count * 2);

  if (toys_count >= 50) {
    price *= 0.75;
  }

  price *= 0.9;

  cout.setf(ios::fixed);
  cout.precision(2);

  if (price >= holiday_price) {
    cout << "Yes! " << (price - holiday_price) << " lv left." << endl;
  } else {
    cout << "Not enough money! " << (holiday_price - price) << " lv needed."
         << endl;
  }

  return 0;
}