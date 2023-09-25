#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1111; i <= 9999; i++) {
    int units = i % 10;
    int tens = i / 10 % 10;
    int hundreds = i / 100 % 10;
    int thousands = i / 1000 % 10;

    if (units == 0 || tens == 0 || hundreds == 0 || thousands == 0) {
      continue;
    }

    if (n % units == 0 && n % tens == 0 && n % hundreds == 0 &&
        n % thousands == 0) {
      cout << i << " ";
    }
  }
}