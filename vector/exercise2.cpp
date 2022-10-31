#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> country;
    string input;
    for (int i = 0; input != "Done"; i++)
    {
        cout << "Enter the country : ";
        cin >> input;
        country.push_back(input);
    }
    country.pop_back();
    string temp;

    for (int i = 0; i < country.size(); i++)
    {
        for (int j = i + 1; j < country.size(); j++)
        {
            if (country[i] > country[j])
            {
                temp = country[i];
                country[i] = country[j];
                country[j] = temp;
            }
        }
    }

    for (int i = 0; i < country.size(); i++)
    {
        cout << country[i] << "\t";
    }
    return 0;
}