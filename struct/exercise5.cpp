#include <iostream>
using namespace std;
int main()
{
    char option;
    cout << "a. Display all account." << endl;
    cout << "b. Display the account that has more than $600." << endl;
    cout << "c. Add $300 to account that has less than $500." << endl;
    cout << "d. To withdraw $100 from account that has more than $200." << endl;
    cout << "Choose a letter : ";
    cin >> option;

    struct PersonalAccount
    {
        int id;
        string name;
        double balance;
    } acc[] = {
        {1, "Abby", 520},
        {2, "Dana", 610},
        {3, "Young", 200},
        {4, "Joe", 350},
        {5, "Soul", 50}};
    if (option == 'a')
    {
        cout << "Display all account \n";
        for (int i = 0; i < 5; i++)
        {
            cout << "User's Id : " << acc[i].id << " \t Name :" << acc[i].name << " \t Balance : "
                 << "$" << acc[i].balance << "\n";
        }
    }

    else if (option == 'b')
    {
        cout << "Display the account who has more than $600 " << endl;
        for (int i = 0; i < 5; i++)
        {
            if (acc[i].balance > 600)
            {
                cout << "User's Id : " << acc[i].id << " \t Name :" << acc[i].name << " \t Balance : "
                     << "$" << acc[i].balance << "\n";
            }
        }
    }

    else if (option == 'c')
    {
        cout << "Add $300 from account who has less than $500 " << endl;
        for (int i = 0; i < 5; i++)
        {
            if (acc[i].balance < 500)
            {
                acc[i].balance += 300;
                cout << "User's Id : " << acc[i].id << " \t Name :" << acc[i].name << " \t Balance : "
                     << "$" << acc[i].balance << "\n";
            }
        }
    }
    else if (option == 'd')
    {
        cout << "Withdraw $100 from account who has more than $200" << endl;
        //
        for (int i = 0; i < 5; i++)
        {
            if (acc[i].balance > 200)
            {
                acc[i].balance -= 100;
                cout << "User's Id : " << acc[i].id << " \t Name :" << acc[i].name << " \t Balance : "
                     << "$" << acc[i].balance << "\n";
            }
        }
    }
    else
    {
        cout << "Out of range!";
    }
    return 0;
}