#include <iostream>
#include <vector>
using namespace std;
// function to find location of the largest element
vector<int> find_largest(vector<vector<double>> list)
{
    vector<int> answer;
    double largest = list[0][0];
    for (int i = 0; i < list.size(); i++)
    {
        for (int j = 0; j < list[i].size(); j++)
        {
            if (list[i][j] > largest)
            {
                largest = list[i][j];
                answer.clear();
                answer.insert(answer.begin(), i);
                answer.insert(answer.begin() + 1, j);
            }
        }
    }
    return answer;
}
int main()
{
    int row;
    double a, b, c, d;
    vector<vector<double>> list;
    vector<double> sub;
    // get the number from user
    cout << "Enter number of row:";
    cin >> row;
    // store numbers in the 2D vector
    for (int i = 0; i < row; i++)
    {
        cout << "Enter row number:";
        cin >> a >> b >> c >> d;
        sub.push_back(a);
        sub.push_back(b);
        sub.push_back(c);
        sub.push_back(d);
        list.push_back(sub);
        sub.clear();
    }
    // display the location of largest
    cout << "The location of the largest element is at(" << find_largest(list)[0] << "," << find_largest(list)[1] << ")";
    return 0;
}