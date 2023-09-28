#include <iostream>
using namespace std;

int main()
{
    double dogFoodPrice = 2.5;
    double catFoodPrice = 4;

    int dogFoodCount, catFoodCount;
    cin >> dogFoodCount >> catFoodCount;

    double dogFoodCost = dogFoodPrice * dogFoodCount;
    double catFoodCost = catFoodPrice * catFoodCount;

    double totalCost = dogFoodCost + catFoodCost;

    cout << totalCost << " lv.";

}

