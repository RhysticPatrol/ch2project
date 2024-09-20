#include <iostream>
#include <string>

using namespace std;
int main()
{
    //establish data needed for equations
    int Customers = 16500;
    float energyDrink = 0.15;
    float preferCitris = 0.58;

    cout << "Customers that drink more than one energy drink per week: " << (Customers * energyDrink) << "\n"; //display the result of customers multiplied by the energy drink percentage
    cout << "Customers that prefer citrus flavored energy drinks: " << (Customers * preferCitris) << "\n"; //display the result of customers multiplied by the percentage of people who prefer citrus flavored drinks

    return 0;
}
