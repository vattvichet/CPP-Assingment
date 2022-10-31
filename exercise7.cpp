#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // By the probability, there are ( 5/6 = 0.83 or 83%) chance that everyone might has been shot
    float diePercenatge = 0.83; // 5/6
    //
    for (int n = 1; n < 7; n++)
    {
        // Let n amount of people that are standing in order
        float percent = pow(diePercenatge, n);

        //
        // The amount of bullets each person got shot
        int bullet = percent * 1000;
        //
        cout << endl;
        cout << "Person" << n << "'s Die Percentage : " << percent * 100 << "% ";
        cout << endl;
        cout << "\t So He/She has been shot by " << bullet << " bullets";
        cout << endl;
        cout << "____________________________________________________";
    }

    return 0;
}