#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int width, length, height;
  cin >> width >> length >> height;

  int volume = width * length * height;

  while (volume > 0) {
    string command;
    cin >> command;

    if (command == "Done") {
      cout << volume << " Cubic meters left." << endl;
      return 0;
    }

    int boxes_count = stoi(command);
    volume -= boxes_count;
  }

  cout << "No more free space! You need " << abs(volume) << " Cubic meters more." << endl;
  return 0;
}