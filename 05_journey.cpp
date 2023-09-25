#include <iostream>

using namespace std;

int main() {
  double budget;
  string season;

  cin >> budget >> season;

  string destination, space_type;
  double price;

  if (budget <= 100) {
    destination = "Bulgaria";

    if (season == "summer") {
      price = budget * 0.3;
      space_type = "Camp";
    } else {
      price = budget * 0.7;
      space_type = "Hotel";
    }
  } else if (budget <= 1000) {
    destination = "Balkans";

    if (season == "summer") {
      price = budget * 0.4;
      space_type = "Camp";
    } else {
      price = budget * 0.8;
      space_type = "Hotel";
    }
  } else {
    destination = "Europe";
    price = budget * 0.9;
    space_type = "Hotel";
  }

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << "Somewhere in " << destination << endl;
  cout << space_type << " - " << price << endl;

  return 0;
}