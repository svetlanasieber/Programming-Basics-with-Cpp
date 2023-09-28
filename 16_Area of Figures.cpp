#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    string figure;
	double area;
	double pi = 3.14159265359;

    cin >> figure;

	cout.setf(ios::fixed);
	cout.precision(3);

	if (figure == "square")
	{
		double side;
		cin >> side;
		area = side * side;
	}
	else if (figure == "rectangle")
	{
		double length, width;
		cin >> length >> width;
		area = length * width;
	}
	else if (figure == "circle")
	{
		double radius;
		cin >> radius;
		area = radius * radius * pi;
	}
	else if (figure == "triangle")
	{
		double length, height;
		cin >> length >> height;
		area = (length * height) / 2;
	}

	cout << area;
}