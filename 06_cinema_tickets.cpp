#include <iostream>

using namespace std;

int main() {
  string command;
  getline(cin >> ws, command);

  int student_tickets = 0;
  int standard_tickets = 0;
  int kid_tickets = 0;
  int total_tickets = 0;

  cout.setf(ios::fixed);
  cout.precision(2);

  while (command != "Finish") {
    string movie_name = command;
    int available_places;
    cin >> available_places;

    int reserved_places = 0;

    while (reserved_places < available_places) {
      string input;
      cin >> input;

      if (input == "End") {
        double full_percent = (double)reserved_places / available_places * 100;
        cout << movie_name << " - " << full_percent << "% full." << endl;
        break;
      }

      string ticket_type = input;

      if (ticket_type == "student") {
        student_tickets++;
      } else if (ticket_type == "standard") {
        standard_tickets++;
      } else {
        kid_tickets++;
      }

      reserved_places++;
    }

    if (reserved_places == available_places) {
      double full_percent = (double)reserved_places / available_places * 100;
      cout << movie_name << " - " << full_percent << "% full." << endl;
    }

    total_tickets += reserved_places;
    getline(cin >> ws, command);
  }

  double student_tickets_percent = (double)student_tickets / total_tickets * 100;
  double standard_tickets_percent = (double)standard_tickets / total_tickets * 100;
  double kid_tickets_percent = (double)kid_tickets / total_tickets * 100;

  cout << "Total tickets: " << total_tickets << endl;
  cout << student_tickets_percent << "% student tickets." << endl;
  cout << standard_tickets_percent << "% standard tickets." << endl;
  cout << kid_tickets_percent << "% kids tickets." << endl;
}