#include <iostream>

using namespace std;

int main() {
  double budget, clothes_price_per_actor;

  int actors_count;

  cin >> budget >> actors_count >> clothes_price_per_actor;

  double decor_price = budget * 0.1;

  double clothes_price = clothes_price_per_actor * actors_count;

  if (actors_count > 150) {
    clothes_price *= 0.9;
  }

  double total_sum = clothes_price + decor_price;

  cout.setf(ios::fixed);
  cout.precision(2);

  if (budget >= total_sum) {
    cout << "Action!" << endl;
    cout << "Wingard starts filming with " << (budget - total_sum)
         << " leva left." << endl;
  } else {
    cout << "Not enough money!" << endl;
    cout << "Wingard needs " << (total_sum - budget) << " leva more." << endl;
  }

  return 0;
}