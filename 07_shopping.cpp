#include <iostream>

using namespace std;

int main() {
  double budget;
  int videocards_count, processors_count, ram_count;

  cin >> budget >> videocards_count >> processors_count >> ram_count;

  double videocards_price = videocards_count * 250.0;

  double processors_price = (videocards_price * 0.35) * processors_count;

  double ram_price = (videocards_price * 0.1) * ram_count;

  double total_price = videocards_price + processors_price + ram_price;

  if (videocards_count > processors_count) {
    total_price *= 0.85;
  }

  cout.setf(ios::fixed);
  cout.precision(2);

  if (budget >= total_price) {
    cout << "You have " << (budget - total_price) << " leva left!" << endl;
  } else {
    cout << "Not enough money! You need " << (total_price - budget)
         << " leva more!" << endl;
    return 0;
  }
}