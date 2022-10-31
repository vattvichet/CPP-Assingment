#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> v = {{2, 4, 3, 4, 5, 8, 8},
                             {7, 3, 4, 3, 3, 4, 4},
                             {3, 3, 4, 3, 3, 2, 2},
                             {9, 3, 4, 7, 3, 4, 1},
                             {3, 5, 4, 3, 6, 3, 8},
                             {3, 4, 4, 6, 3, 4, 4},
                             {3, 7, 4, 8, 3, 8, 4},
                             {6, 3, 5, 9, 2, 7, 9}};
    // displays the elements

    for (int i = 0; i < v.size(); i++)
    // sizeS() return the number of element present in       a vector
    {
        cout << "employee" << i;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << " " << v[i][j];
        }
        cout << endl;
    }
    // find the sum of the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << "employee" << i;
        // use begin() to return an iterator to point at the first element of a vector
        // end()return an iterator to point at past-the-end element of a vector
        cout << " " << accumulate(v[i].begin(), v[i].end(), 0) << " hours";
        cout << endl;
    }

    return 0;
}