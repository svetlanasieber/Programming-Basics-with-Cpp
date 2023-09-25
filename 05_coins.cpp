#include <iostream>

using namespace std;

int main() {
  double change;
  cin >> change;

  int change_in_coins = change * 100;
  int coins_used = 0;

  while (change_in_coins > 0) {
    if (change_in_coins >= 200) {
      change_in_coins -= 200;
    } else if (change_in_coins >= 100) {
      change_in_coins -= 100;
    } else if (change_in_coins >= 50) {
      change_in_coins -= 50;
    } else if (change_in_coins >= 20) {
      change_in_coins -= 20;
    } else if (change_in_coins >= 10) {
      change_in_coins -= 10;
    } else if (change_in_coins >= 5) {
      change_in_coins -= 5;
    } else if (change_in_coins >= 2) {
      change_in_coins -= 2;
    } else {
      change_in_coins -= 1;
    }

    coins_used++;
  }

  cout << coins_used << endl;
}