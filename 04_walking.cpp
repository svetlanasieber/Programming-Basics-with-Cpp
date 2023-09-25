#include <iostream>

using namespace std;

int main() {
  int total_steps = 0;

  string command;
  getline(cin >> ws, command);

  while (command != "Going home") {
    int steps = stoi(command);

    total_steps += steps;

    if (total_steps >= 10000) {
      cout << "Goal reached! Good job!" << endl;
      return 0;
    }

    getline(cin >> ws, command);
  }

  int steps_back;
  cin >> steps_back;

  total_steps += steps_back;

  if (total_steps >= 10000) {
    cout << "Goal reached! Good job!" << endl;
  } else {
    cout << (10000 - total_steps) << " more steps to reach goal." << endl;
  }

  return 0;
}