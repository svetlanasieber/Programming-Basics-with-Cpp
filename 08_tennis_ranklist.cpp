#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int tournaments_count, initial_points;

  cin >> tournaments_count >> initial_points;

  int points_won = 0;
  int wins_count = 0;

  for (int i = 0; i < tournaments_count; i++) {
    string result;

    cin >> result;

    if (result == "W") {
      points_won += 2000;
      wins_count++;
    } else if (result == "F") {
      points_won += 1200;
    } else {
      points_won += 720;
    }
  }

  int average_points = floor(points_won / tournaments_count);

  cout << "Final points: " << (initial_points + points_won) << endl;
  cout << "Average points: " << average_points << endl;

  cout.setf(ios::fixed);
  cout.precision(2);

  double percent_won = ((double)wins_count / tournaments_count) * 100;

  cout << percent_won << "%" << endl;
}