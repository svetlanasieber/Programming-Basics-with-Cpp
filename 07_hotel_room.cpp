#include <iostream>

using namespace std;

int main() {
  string month;
  int nights;

  cin >> month >> nights;

  double studio_price, apartment_price;

  if (month == "May" || month == "October") {
    studio_price = nights * 50.0;
    apartment_price = nights * 65.0;

    if (nights > 7 && nights <= 14) {
      studio_price *= 0.95;
    } else if (nights > 14) {
      studio_price *= 0.7;
      apartment_price *= 0.9;
    }
  } else if (month == "June" || month == "September") {
    studio_price = nights * 75.2;
    apartment_price = nights * 68.7;

    if (nights > 14) {
      studio_price *= 0.8;
      apartment_price *= 0.9;
    }
  } else {
    studio_price = nights * 76.0;
    apartment_price = nights * 77.0;

    if (nights > 14) {
      apartment_price *= 0.9;
    }
  }

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << "Apartment: " << apartment_price << " lv." << endl;
  cout << "Studio: " << studio_price << " lv." << endl;

  return 0;
}