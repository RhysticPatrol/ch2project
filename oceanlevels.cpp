#include <iostream>
#include <string>

using namespace std;
int main() {
    float oceanRise = 1.5; //millimeters that ocean rises a year
    float fiveYears = 5 * oceanRise; // first equation to calculate the rise after 5 years
    float sevenYears = 7 * oceanRise; // equation to calculate the rise after 7 years 
    float tenYears = 10 * oceanRise; // equation to calculate the rise after 10 years

    cout << fiveYears << "\n" ; //displaying results for equations
    cout << sevenYears << "\n";
    cout << tenYears << "\n";

    return 0;
}
