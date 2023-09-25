#include <iostream>

using namespace std;

int main() {
  double holiday_money, available_money;
  cin >> holiday_money >> available_money;

  int days_spent = 0;
  int days_passed = 0;

  while (available_money < holiday_money) {
    days_passed++;
    string action;
    double sum;

    cin >> action >> sum;

    if (action == "save") {
      available_money += sum;
      days_spent = 0;
    } else {
      if (sum > available_money) {
        available_money = 0;
      } else {
        available_money -= sum;
      }

      days_spent++;

      if (days_spent == 5) {
        cout << "You can't save the money." << endl;
        cout << days_passed << endl;
        return 1;
      }
    }
  }

  cout << "You saved the money for " << days_passed << " days." << endl;
  return 0;
}