#include <iostream>
#include <string>

using namespace std;
int main()
{
    int Customers = 16500;
    float energyDrink = 0.15;
    float preferCitris = 0.58;

    cout << "Customers that drink more than one energy drink: " << (Customers * energyDrink) << "\n";
    cout << "Customers that prefer citrus flavored energy drinks: " << (Customers * preferCitris) << "\n";

    return 0;
}