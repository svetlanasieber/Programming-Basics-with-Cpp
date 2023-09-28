#include <iostream>

using namespace std;


int main()
{
	string firstName;
	string lastName;
	int age;
	string town;

	cin >> firstName >> lastName >> age >> town;

	cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << "." << endl;

	return 0;
}