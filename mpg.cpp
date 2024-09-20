#include <iostream>
#include <string>

using namespace std;
int main()
{
    int gasTank = 20;
    float mpgTown = 23.5;
    float mpgHighway = 28.9;
    double distanceTown = (gasTank * mpgTown); //first equation to calculate miles per gallon when driving in town
    double distanceHighway = (gasTank * mpgHighway); //second equation to calulate miles per gallon when driving in the highway

    cout << "Travel Distance in Town: " << distanceTown << "\n"; //display the result of first equation
    cout << "Travel Distance on the Highway: " << distanceHighway << "\n"; //display the result of second equation

    return 0;
}
