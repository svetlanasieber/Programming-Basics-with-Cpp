#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int hours, minutes;
  cin >> hours >> minutes;

  int total_minutes = hours * 60 + minutes + 15;

  int final_hours = total_minutes / 60;
  int final_minutes = total_minutes % 60;

  if (final_hours == 24) {
    final_hours = 0;
  }

  if (final_minutes < 10) {
    cout << final_hours << ":0" << final_minutes << endl;
  } else {
    cout << final_hours << ":" << final_minutes << endl;
  }
  
  return 0;
}