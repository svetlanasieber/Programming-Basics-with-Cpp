#include <iostream>

using namespace std;

int main() {
  int days;
  string space_type, review;

  cin >> days;
  getline(cin >> ws, space_type);
  getline(cin, review);

  double price;
  days -= 1;

  if (space_type == "room for one person") {
    price = days * 18;
  } else if (space_type == "apartment") {
    price = days * 25;

    if (days < 10) {
      price *= 0.7;
    } else if (days <= 15) {
      price *= 0.65;
    } else {
      price *= 0.5;
    }
  } else {
    price = days * 35;

    if (days < 10) {
      price *= 0.9;
    } else if (days <= 15) {
      price *= 0.85;
    } else {
      price *= 0.8;
    }
  }

  if (review == "positive") {
    price *= 1.25;
  } else {
    price *= 0.9;
  }

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << price << endl;
}