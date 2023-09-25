#include <iostream>

using namespace std;

int main() {
  string flowers_type;
  int flowers_count, budget;

  cin >> flowers_type >> flowers_count >> budget;

  double total_price;

  if (flowers_type == "Roses") {
    total_price = flowers_count * 5;
  } else if (flowers_type == "Dahlias") {
    total_price = flowers_count * 3.8;
  } else if (flowers_type == "Tulips") {
    total_price = flowers_count * 2.8;
  } else if (flowers_type == "Narcissus") {
    total_price = flowers_count * 3;
  } else {
    total_price = flowers_count * 2.5;
  }

  if (flowers_type == "Roses" && flowers_count > 80) {
    total_price *= 0.9;
  } else if (flowers_type == "Dahlias" && flowers_count > 90) {
    total_price *= 0.85;
  } else if (flowers_type == "Tulips" && flowers_count > 80) {
    total_price *= 0.85;
  } else if (flowers_type == "Narcissus" && flowers_count < 120) {
    total_price *= 1.15;
  } else if (flowers_type == "Gladiolus" && flowers_count < 80) {
    total_price *= 1.2;
  }

  cout.setf(ios::fixed);
  cout.precision(2);

  if (budget >= total_price) {
    cout << "Hey, you have a great garden with " << flowers_count << " "
         << flowers_type << " and " << (budget - total_price) << " leva left."
         << endl;
  } else {
    cout << "Not enough money, you need " << (total_price - budget)
         << " leva more." << endl;
  }

  return 0;
}