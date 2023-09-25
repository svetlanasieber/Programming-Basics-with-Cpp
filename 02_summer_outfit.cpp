#include <iostream>

using namespace std;

int main() {
  int degrees;
  string part_of_day;

  cin >> degrees >> part_of_day;

  string outfit, shoes;

  if (part_of_day == "Morning") {
    if (degrees <= 18) {
      outfit = "Sweatshirt";
      shoes = "Sneakers";
    } else if (degrees <= 24) {
      outfit = "Shirt";
      shoes = "Moccasins";
    } else {
      outfit = "T-Shirt";
      shoes = "Sandals";
    }
  } else if (part_of_day == "Afternoon") {
    if (degrees <= 18) {
      outfit = "Shirt";
      shoes = "Moccasins";
    } else if (degrees <= 24) {
      outfit = "T-Shirt";
      shoes = "Sandals";
    } else {
      outfit = "Swim Suit";
      shoes = "Barefoot";
    }
  } else {
    outfit = "Shirt";
    shoes = "Moccasins";
  }

  cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;
    return 0;
}