#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float num[100], sum = 0.0, average;
    cout << "========Welcome to Average Calculator=========" << endl;
    cout << "Enter the number of Data = ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << i + 1 << ".enter number = ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout << "average = " << average;
    return 0;
}
