#include <iostream>

using namespace std;

int main() {
  int tabs_count, salary;

  cin >> tabs_count >> salary;

  for (int i = 0; i < tabs_count; i++) {
    string website;
    cin >> website;

    if (website == "Facebook") {
      salary -= 150;
    } else if (website == "Instagram") {
      salary -= 100;
    } else if (website == "Reddit") {
      salary -= 50;
    }
  }

  if (salary <= 0) {
    cout << "You have lost your salary." << endl;
  } else {
    cout << salary << endl;
  }
}