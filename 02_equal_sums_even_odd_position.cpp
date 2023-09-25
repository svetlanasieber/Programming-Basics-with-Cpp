#include <iostream>

using namespace std;

int main() {
  int num1, num2;
  cin >> num1 >> num2;

  bool has_result = false;

  for (int i = num1; i <= num2; i++) {
    string num_as_string = to_string(i);
    int sum_even = 0;
    int sum_odd = 0;

    for (int j = 0; j < num_as_string.length(); j++) {
      if (j % 2 == 0) {
        sum_even += num_as_string[j];
      } else {
        sum_odd += num_as_string[j];
      }
    }

    if (sum_even == sum_odd) {
      cout << i << " ";
      has_result = true;
    }
  }
}