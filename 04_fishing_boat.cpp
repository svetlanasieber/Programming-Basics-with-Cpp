#include <iostream>

using namespace std;

int main() {
  double budget;
  string season;
  int fishers_count;

  cin >> budget >> season >> fishers_count;

  double boat_price;

  if (season == "Spring") {
    boat_price = 3000;
  } else if (season == "Summer" || season == "Autumn") {
    boat_price = 4200;
  } else {
    boat_price = 2600;
  }

  if (fishers_count <= 6) {
    boat_price *= 0.9;
  } else if (fishers_count <= 11) {
    boat_price *= 0.85;
  } else {
    boat_price *= 0.75;
  }

  if (fishers_count % 2 == 0 && season != "Autumn") {
    boat_price *= 0.95;
  }

  cout.setf(ios::fixed);
  cout.precision(2);

  if (budget >= boat_price) {
    cout << "Yes! You have " << (budget - boat_price) << " leva left." << endl;
  } else {
    cout << "Not enough money! You need " << (boat_price - budget) << " leva."
         << endl;
  }

  return 0;
}