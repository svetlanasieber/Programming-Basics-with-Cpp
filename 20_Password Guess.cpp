#include <iostream>

using namespace std;

int main()
{
	string password;

	cin >> password;

	if (password == "s3cr3t!P@ssw0rd")
	{
		cout << "Welcome";
	}
	else
	{
		cout << "Wrong password!";
	}
}