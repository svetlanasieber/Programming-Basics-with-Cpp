#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int c1, c2, c3, c4, c5;
  c1 = c2 = c3 = c4 = c5 = 0;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    if (num < 200) {
      c1++;
    } else if (num < 400) {
      c2++;
    } else if (num < 600) {
      c3++;
    } else if (num < 800) {
      c4++;
    } else {
      c5++;
    }
  }

  double p1 = ((double)c1 / n) * 100;
  double p2 = ((double)c2 / n) * 100;
  double p3 = ((double)c3 / n) * 100.0;
  double p4 = ((double)c4 / n) * 100.0;
  double p5 = ((double)c5 / n) * 100.0;

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << p1 << "%" << endl;
  cout << p2 << "%" << endl;
  cout << p3 << "%" << endl;
  cout << p4 << "%" << endl;
  cout << p5 << "%" << endl;
}