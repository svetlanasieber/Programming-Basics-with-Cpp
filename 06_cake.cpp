#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int width, length;
  cin >> width >> length;

  int total_pieces = width * length;

  while (total_pieces > 0) {
    string command;
    cin >> command;

    if (command == "STOP") {
      cout << total_pieces << " pieces are left." << endl;
      return 0;
    }

    int pieces_taken = stoi(command);
    total_pieces -= pieces_taken;
  }

  cout << "No more cake left! You need " << abs(total_pieces) << " pieces more." << endl;
  return 0;
}