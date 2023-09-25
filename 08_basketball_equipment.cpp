#include <iostream>

using namespace std;

int main() {
    int yearly_fee;
    cin >> yearly_fee;

    double shoes = yearly_fee * 0.6;

    double outfit = shoes * 0.8;

    double ball = outfit * 0.25;

    double accessories = ball * 0.2;

    double total = yearly_fee + shoes + outfit + ball + accessories;

    cout << total << endl;
    return 0;
}