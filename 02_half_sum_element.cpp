#include <climits>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  int max_num = INT_MIN;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    sum += num;

    if (num > max_num) {
      max_num = num;
    }
  }

  sum -= max_num;

  if (sum == max_num) {
    cout << "Yes" << endl;
    cout << "Sum = " << sum << endl;
  } else {
    cout << "No" << endl;
    cout << "Diff = " << abs(sum - max_num) << endl;
  }
}