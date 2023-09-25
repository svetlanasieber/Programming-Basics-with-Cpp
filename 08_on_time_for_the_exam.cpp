#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int exam_hour, exam_min, arrival_hour, arrival_min;

  cin >> exam_hour >> exam_min >> arrival_hour >> arrival_min;

  int total_exam_time = exam_hour * 60 + exam_min;

  int total_arrival_time = arrival_hour * 60 + arrival_min;

  int diff_time = abs(total_exam_time - total_arrival_time);

  int diff_hours = floor(diff_time / 60);

  int diff_mins = diff_time % 60;

  if (total_exam_time == total_arrival_time) {
    cout << "On time" << endl;
  } else if (total_exam_time > total_arrival_time) {
    if (diff_time <= 30) {
      cout << "On time" << endl;
      cout << diff_time << " minutes before the start" << endl;
      ;
    } else {
      cout << "Early" << endl;

      if (diff_hours > 0) {
        if (diff_mins < 10) {
          cout << diff_hours << ":0" << diff_mins << " hours before the start"
               << endl;
        } else {
          cout << diff_hours << ":" << diff_mins << " hours before the start"
               << endl;
        }
      } else {
        cout << diff_mins << " minutes before the start" << endl;
      }
    }
  } else {
    cout << "Late" << endl;

    if (diff_hours > 0) {
      if (diff_mins < 10) {
        cout << diff_hours << ":0" << diff_mins << " hours after the start"
             << endl;
      } else {
        cout << diff_hours << ":" << diff_mins << " hours after the start"
             << endl;
      }
    } else {
      cout << diff_mins << " minutes after the start" << endl;
    }
  }
}