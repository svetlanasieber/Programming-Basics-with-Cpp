#include <iostream>

using namespace std;

int main() {
  int age;
  double washer_price, price_per_toy;

  cin >> age >> washer_price >> price_per_toy;

  double sum_won = 0;
  int birthday_sum = 10;

  for (int i = 1; i <= age; i++) {
    if (i % 2 == 0) {
      sum_won += (birthday_sum - 1);
      birthday_sum += 10;
    } else {
      sum_won += price_per_toy;
    }
  }

  cout.setf(ios::fixed);
  cout.precision(2);

  if (sum_won >= washer_price) {
    cout << "Yes! " << (sum_won - washer_price) << endl;
  } else {
    cout << "No! " << (washer_price - sum_won) << endl;
  }
}