#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //
    cout << "Enter the number into Matrix1 : " << endl;
    vector<vector<double>> matrix1;
    for (int i = 0; i < 3; i++)
    {
        vector<double> subMatrix1;
        for (int j = 0; j < 3; j++)
        {
            cout << "[" << i << "]"
                 << " [" << j << "] : ";
            double temp;
            cin >> temp;
            subMatrix1.push_back(temp);
        }
        matrix1.push_back(subMatrix1);
    }

    //
    cout << "Enter the number into Matrix2 : " << endl;
    vector<vector<double>> matrix2;
    for (int i = 0; i < 3; i++)
    {
        vector<double> subMatrix2;
        for (int j = 0; j < 3; j++)
        {
            cout << "[" << i << "]"
                 << " [" << j << "] : ";
            double temp;
            cin >> temp;
            subMatrix2.push_back(temp);
        }
        matrix2.push_back(subMatrix2);
    }

    cout << endl
         << "   The answer are : " << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << matrix1[i][j] + matrix2[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}