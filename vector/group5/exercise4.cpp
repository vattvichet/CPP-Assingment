#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> row_0 = {1, 2, 3, 4};
    vector<int> row_1 = {5, 6, 7, 8};
    vector<int> row_2 = {9, 1, 3, 1};

    for (int i = 0; i < 4; i++)
    {
        cout << row_0[i] + row_1[i] + row_2[i] << endl;
    }

    return 0;
}