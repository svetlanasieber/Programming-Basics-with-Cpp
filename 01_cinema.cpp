#include <iostream>

using namespace std;

int main() {
  string projection_type;
  int rows, cols;

  cin >> projection_type >> rows >> cols;

  int tickets = rows * cols;
  double total;

  if (projection_type == "Premiere") {
    total = tickets * 12;
  } else if (projection_type == "Normal") {
    total = tickets * 7.5;
  } else {
    total = tickets * 5;
  }

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << total << " leva" << endl;
  return 0;
}