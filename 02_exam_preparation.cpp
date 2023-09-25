#include <iostream>
#include <string>

using namespace std;

int main() {
  int max_bad_grades;
  cin >> max_bad_grades;

  string problem_name;
  getline(cin >> ws, problem_name);

  int cur_bad_grades = 0;
  int total_grades = 0;
  int grades_sum = 0;
  string last_problem = problem_name;

  while (problem_name != "Enough") {
    int cur_grade;
    cin >> cur_grade;

    if (cur_grade <= 4) {
      cur_bad_grades++;

      if (cur_bad_grades == max_bad_grades) {
        cout << "You need a break, " << cur_bad_grades << " poor grades."
             << endl;
        return 1;
      }
    }

    total_grades++;
    grades_sum += cur_grade;
    last_problem = problem_name;

    getline(cin >> ws, problem_name);
  }

  cout.setf(ios::fixed);
  cout.precision(2);

  double avg_grade = (double)grades_sum / total_grades;

  cout << "Average score: " << avg_grade << endl;
  cout << "Number of problems: " << total_grades << endl;
  cout << "Last problem: " << last_problem << endl;

  return 0;
}