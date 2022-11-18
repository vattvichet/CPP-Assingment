#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, string> country_city = {{"Cambodia", "Phnom Penh"},
                                        {"Thailand", "Bangkok"},
                                        {"China", "Beijing"},
                                        {"Japan", "Tokyo"},
                                        {"India", "Delhi"},
                                        {"Malaysia", "Kuala Lumpur"},
                                        {"Canada", "Ottawa"},
                                        {"France", "Paris"},
                                        {"Ukraine", "Kiev"},
                                        {"Italy ", "Rome"}};
    string answer;
    int count = 0;
    // use loop for ask user input
    for (auto e : country_city)
    {
        cout << "- What is the capital of " << e.first << " ? "
             << " : ";
        getline(cin, answer);
        // capitalist the input
        answer[0] = toupper(answer[0]);
        for (int i = 1; i < answer.length(); i++)
        {
            answer[i] = tolower(answer[i]);

            if (answer[i] == ' ')
            {
                answer[i + 1] = toupper(answer[i + 1]);
                i++;
            }
        }
        // check the answer that correct and suggest
        if (answer == e.second)
        {
            cout << "   Your answer is correct. " << endl;
            count += 1;
        }
        else
        {
            cout << "   The correct answer should be " << e.second << "." << endl;
        }
    }
    // output the score of correct country
    cout << "   ============== SCORE =========== " << endl;
    cout << "   The correct country  score "
         << " : " << count << endl;
    cout << "   ============ GOODBYE !!=========" << endl;
    return 0;
}