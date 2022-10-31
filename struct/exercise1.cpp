#include <iostream>
#include <string>
using namespace std;

// typedef
struct student
{
    string name;
    int age;
    int id;
};
int main()
{
    int age;
    int id;
    char option;
    student s[8] = {{"reaksa", 11, 1}, {"Yaya", 12, 2}, {"kim", 13, 3}, {"seyha", 14, 4}, {"makara", 15, 5}, {"miya", 16, 6}, {"dina", 17, 7}, {"kaka", 18, 8}};
    cout << "\t"
         << "a.Display by Age" << endl;
    cout << "\t"
         << "b.Display name by even ID" << endl;
    cout << "\t"
         << "c.Display student info by id" << endl;
    cin >> option;
    switch (option)
    {
    case 'a':
        cout << "input age:";
        cin >> age;
        for (int i = 0; i < 8; i++)

        {
            if (age == s[i].age)
            {
                cout << "age:" << s[i].age << endl;
                cout << "name:" << s[i].name << endl;
            }
        }
        break;

    case 'b':

        for (int i = 0; i < 8; i++)
        {
            if ((s[i].age % 2) == 0)
            {
                cout << "name:" << s[i].name << "\t"
                     << "Id:" << s[i].id << endl;
            }
        }
        break;

    case 'c':
        int id;
        cout << "input id:";
        cin >> id;
        for (int i = 0; i < 8; i++)
        {
            if (id == s[i].id)
            {
                cout << "age:" << s[i].age << "\t"
                     << "id:" << s[i].id << "\t"
                     << "name:" << s[i].name << endl;
            }
        }
        break;
    }
}