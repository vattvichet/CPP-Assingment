#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<vector<string>> vector2D = {
        {"Cambdia", "Phnom Penh"},
        {"Thailand", "Bangkok"},
        {"China", "Beijing"},
        {"Japan", "Tokyo"},
        {"India", "Delhi"},
        {"Malaysia", "Kuala Lumpur"},
    };
    int count = 0;
    for (int i = 0; i < vector2D.size(); i++)
    {
        cout << "What is the capital of " << vector2D[i][0] << " ? : ";
        //
        string answer;
        getline(cin, answer);
        cout << endl;
        //
        for (int i = 0; i < answer.length(); i++)
        {
            answer[0] = toupper(answer[0]);
            if (answer[i] == ' ')
            {
                answer[i + 1] = toupper(answer[i + 1]);
            }
        }
        if (answer == vector2D[i][1])
        {
            count++;
            cout << "Your answer is right ! "
                 << "Your current score : " << count << endl
                 << endl;
        }
        else
        {
            cout << "The correct answer should be : " << vector2D[i][1] << endl
                 << endl;
        }
    }

    cout << "Your totoal score is : " << count << endl;

    return 0;
}