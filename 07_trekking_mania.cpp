#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int c1, c2, c3, c4, c5;
  c1 = c2 = c3 = c4 = c5 = 0;

  int total_people = 0;

  for (int i = 0; i < n; i++) {
    int people_count;
    cin >> people_count;

    if (people_count <= 5) {
      c1 += people_count;
    } else if (people_count <= 12) {
      c2 += people_count;
    } else if (people_count <= 25) {
      c3 += people_count;
    } else if (people_count <= 40) {
      c4 += people_count;
    } else {
      c5 += people_count;
    }

    total_people += people_count;
  }

  double p1 = ((double)c1 / total_people) * 100;
  double p2 = ((double)c2 / total_people) * 100;
  double p3 = ((double)c3 / total_people) * 100;
  double p4 = ((double)c4 / total_people) * 100;
  double p5 = ((double)c5 / total_people) * 100;

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << p1 << "%" << endl;
  cout << p2 << "%" << endl;
  cout << p3 << "%" << endl;
  cout << p4 << "%" << endl;
  cout << p5 << "%" << endl;
}