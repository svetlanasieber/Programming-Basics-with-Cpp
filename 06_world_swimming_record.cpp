#include <iostream>

using namespace std;

int main() {
  double record, distance, time_per_meter;

  cin >> record >> distance >> time_per_meter;

  double time = distance * time_per_meter;
  int times_delayed = distance / 15;
  double total_time_delayed = times_delayed * 12.5;

  double final_time = time + total_time_delayed;

  cout.setf(ios::fixed);
  cout.precision(2);

  if (final_time < record) {
    cout << "Yes, he succeeded! The new world record is " << final_time
         << " seconds.";
  } else {
    cout << "No, he failed! He was " << (final_time - record)
         << " seconds slower.";
  }

  return 0;
}