#include <iostream>

using namespace std;

int main() {
  string command;
  cin >> command;

  int sum_prime = 0;
  int sum_non_prime = 0;

  while (command != "stop") {
    int num = stoi(command);

    if (num < 0) {
      cout << "Number is negative." << endl;
      cin >> command;
      continue;
    }

    bool is_prime = true;

    if (num == 0 || num == 1) {
      is_prime = false;
    }

    for (int i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime == true) {
      sum_prime += num;
    } else {
      sum_non_prime += num;
    }

    cin >> command;
  }

  cout << "Sum of all prime numbers is: " << sum_prime << endl;
  cout << "Sum of all non prime numbers is: " << sum_non_prime << endl;
}