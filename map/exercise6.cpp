#include <iostream>
#include <map>
using namespace std;
int main()
{

    map<int, map<string, int>> group1 = {
        {1, {{"Maths", 50}, {"Physics", 75}, {"Chemistry", 62}}},
        {2, {{"Maths", 75}, {"Physics", 70}, {"Chemistry", 55}}},
        {3, {{"Maths", 66}, {"Physics", 42}, {"Chemistry", 67}}},
        {4, {{"Maths", 65}, {"Physics", 68}, {"Chemistry", 62}}},
        {5, {{"Maths", 72}, {"Physics", 45}, {"Chemistry", 64}}},
        {6, {{"Maths", 57}, {"Physics", 56}, {"Chemistry", 60}}},
        {7, {{"Maths", 69}, {"Physics", 56}, {"Chemistry", 62}}},
        {8, {{"Maths", 75}, {"Physics", 70}, {"Chemistry", 70}}},
    };

    int totalEach1, totalEach2;
    int totalGroup1 = 0;
    int totalGroup2 = 0;
    cout << "Group1:" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Name"
         << "\t\t\t"
         << "Maths"
         << "\t\t"
         << "Physics"
         << "\t\t"
         << "Chemistry"
         << "\t\t"
         << "Total" << endl;
    cout << "---------------------------------------------------------------" << endl;

    for (int i = 1; i < 5; i++)
    {
        totalEach1 = group1[i]["Maths"] + group1[i]["Physics"] + group1[i]["Chemistry"];

        totalGroup1 += totalEach1;
        cout << "Student" << i << "\t\t" << group1[i]["Maths"] << "\t\t\t" << group1[i]["Physics"] << "\t\t\t" << group1[i]["Chemistry"] << "\t\t\t\t" << totalEach1 << endl;
    }
    cout << "---------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t"
         << "Total Score:"
         << "\t" << totalGroup1 << endl;

    //
    //
    cout << "Group2:" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Name"
         << "\t\t\t"
         << "Maths"
         << "\t\t"
         << "Physics"
         << "\t\t"
         << "Chemistry"
         << "\t\t"
         << "Total" << endl;
    cout << "---------------------------------------------------------------" << endl;

    for (int i = 5; i < 9; i++)
    {

        totalEach2 = group1[i]["Maths"] + group1[i]["Physics"] + group1[i]["Chemistry"];

        totalGroup2 += totalEach2;
        cout << "Student" << i << "\t\t" << group1[i]["Maths"] << "\t\t\t" << group1[i]["Physics"] << "\t\t\t" << group1[i]["Chemistry"] << "\t\t\t\t" << totalEach2 << endl;
    }
    cout << "---------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t"
         << "Total Score:"
         << "\t" << totalGroup2 << endl;

    return 0;
}