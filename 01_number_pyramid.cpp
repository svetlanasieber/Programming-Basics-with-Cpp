#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int current = 1;
  bool is_bigger = false;

  for (int rows = 1; rows <= n; rows++) {
    for (int cols = 1; cols <= rows; cols++) {
      if (current > n) {
        is_bigger = true;
        break;
      }

      cout << current << " ";
      current++;
    }
    if (is_bigger == true) {
      break;
    }
    cout << endl;
  }
}