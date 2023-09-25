#include <cstring>
#include <iostream>

using namespace std;

int main() {
  string actor;
  double academy_points;
  int n;

  getline(cin >> ws, actor);
  cin >> academy_points >> n;

  double total_points = academy_points;

  cout.setf(ios::fixed);
  cout.precision(1);

  for (int i = 0; i < n; i++) {
    string judge_name;
    double judge_points;

    getline(cin >> ws, judge_name);
    cin >> judge_points;

    double total_judge_points = judge_name.length() * judge_points / 2;

    total_points += total_judge_points;

    if (total_points > 1250.5) {
      cout << "Congratulations, " << actor
           << " got a nominee for leading role with " << total_points << "!"
           << endl;
      return 0;
    }
  }

  cout << "Sorry, " << actor << " you need " << (1250.5 - total_points)
       << " more!" << endl;
}