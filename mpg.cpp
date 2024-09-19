#include <iostream>
#include <string>

using namespace std;
int main()
{
    int gasTank = 20;
    int mpgTown = 23;
    float mpgCity = 28.9;
    double distanceTown = (gasTank * mpgTown);
    double distanceCity = (gasTank * mpgCity);

    cout << "Travel Distance in Town: " << distanceTown << "\n";
    cout << "Travel Distance on the Highway: " << distanceCity << "\n";

    return 0;
}