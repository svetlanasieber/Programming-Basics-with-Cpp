#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  string presentation_name;
  getline(cin >> ws, presentation_name);

  double total_grade = 0;
  int presentations_count = 0;

  cout.setf(ios::fixed);
  cout.precision(2);

  while (presentation_name != "Finish") {
    double total_presentation_grade = 0;

    for (int i = 0; i < n; i++) {
      double grade;
      cin >> grade;

      total_presentation_grade += grade;
    }

    double average_grade = total_presentation_grade / n;
    total_grade += average_grade;

    cout << presentation_name << " - " << average_grade << "." << endl;

    presentations_count++;
    getline(cin >> ws, presentation_name);
  }

  cout << "Student's final assessment is " << (total_grade / presentations_count) << "." << endl;
}