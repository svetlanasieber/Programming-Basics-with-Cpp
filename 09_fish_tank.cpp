#include <iostream>

using namespace std;

int main() {
    int length, width, height;
    float percent;

    cin >> length >> width >> height >> percent;

    int total_volume = length * width * height;

    double volume_in_liters = total_volume * 0.001;

    double volume_left = volume_in_liters * (1 - (percent / 100));

    cout << volume_left << endl;
    return 0;
}