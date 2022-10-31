#include <iostream>
using namespace std;

int main()
{

    struct Person
    {
        string name;
        int id;

        struct Birthdays
        {
            int day;
            int month;
            int year;
        } birthdays;
    };

    Person *ptr = new Person[10];
    if (ptr == NULL)
    {
        cout << "Error! Memory not allocated.";
        exit(1);
    }

    for (int i = 0; i < 2; i++)
    {

        cout << "Enter name : ";
        fflush(stdin);
        cin >> (ptr + i)->name;
        //
        cout << "Enter ID : ";
        cin >> (ptr + i)->id;
        //

        //
        cout << "Enter Birth date : (day / month / year) : ";
        cin >> (ptr + i)->birthdays.day;
        cin >> (ptr + i)->birthdays.month;
        cin >> (ptr + i)->birthdays.year;
    }

    if ((ptr + 0)->birthdays.year == (ptr + 1)->birthdays.year && (ptr + 0)->birthdays.month == (ptr + 1)->birthdays.month && (ptr + 0)->birthdays.day == (ptr + 1)->birthdays.day)
    {
        cout << "Equal!!!!";
    }
    else if ((ptr + 0)->birthdays.year < (ptr + 1)->birthdays.year && (ptr + 0)->birthdays.month == (ptr + 1)->birthdays.month && (ptr + 0)->birthdays.day == (ptr + 1)->birthdays.day)
    {
        cout << "Older";
    }

    return 0;
}