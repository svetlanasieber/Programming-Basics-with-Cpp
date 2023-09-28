#include <iostream>

using namespace std;

int main()
{
    string name;
    int numProjects;

    cin >> name >> numProjects;

    cout << "The architect " << name << " will need " << numProjects * 3 <<
        " hours to complete " << numProjects << " project/s." << endl;

    return 0;
}

