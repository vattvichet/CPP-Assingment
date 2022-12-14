#include <iostream>
using namespace std;

int main()
{
    struct Employee
    {
        int id;
        string name;
        int salary;
        string department;

        struct JoinDate
        {
            int day;
            int month;
            int year;
        } joinDate;
    };

    cout << "How many employees that you want to show? : ";
    fflush(stdin);
    int n;
    cin >> n;
    Employee employee[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter their Id / Name / Salary / Department / JoinDate (Day / Month / Year) : " << endl;
        cin >> employee[i].id;
        cin >> employee[i].name;
        cin >> employee[i].salary;
        cin >> employee[i].department;
        cin >> employee[i].joinDate.day;
        cin >> employee[i].joinDate.month;
        cin >> employee[i].joinDate.year;
    }
    char option;
    cout << "Choose the option :";
    cin >> option;
    if (option == 'a')
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Display all information :" << endl;
            cout << "ID : " << employee[i].id;
            cout << "Name : " << employee[i].name;
            cout << "Salary : " << employee[i].salary;
            cout << "Department : " << employee[i].department;
            cout << "Joined day : " << employee[i].joinDate.day;
            cout << "Joined month : " << employee[i].joinDate.month;
            cout << "Joined year : " << employee[i].joinDate.year;
        }
    }
    if (option == 'b')
    {
        struct Employee temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (employee[i].salary > employee[j].salary)
                {
                    // struct sorting
                    temp = employee[i];
                    employee[i] = employee[j];
                    employee[j] = temp;
                }
            }
        }
        cout << "Display all information :" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "\t"
                 << "Salary : " << employee[i].salary << endl;
            cout << "ID : " << employee[i].id << endl;
            cout << "Name : " << employee[i].name << endl;
            cout << "Department : " << employee[i].department << endl;
            cout << "Joined day : " << employee[i].joinDate.day << endl;
            cout << "Joined month : " << employee[i].joinDate.month << endl;
            cout << "Joined year : " << employee[i].joinDate.year << endl;
            cout << "-------------------------------";
            cout << endl;
        }
    }
    if (option == 'd')
    {
        struct Employee temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (employee[i].department > employee[j].department)
                {
                    // struct sorting
                    temp = employee[i];
                    employee[i] = employee[j];
                    employee[j] = temp;
                }
            }
        }
        cout << "Display all information :" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "\t"
                 << "Department : " << employee[i].department << endl;
            cout << "ID : " << employee[i].id << endl;
            cout << "Name : " << employee[i].name << endl;
            cout << "Salary : " << employee[i].salary << endl;
            cout << "Joined day : " << employee[i].joinDate.day << endl;
            cout << "Joined month : " << employee[i].joinDate.month << endl;
            cout << "Joined year : " << employee[i].joinDate.year << endl;
            cout << "-------------------------------";
            cout << endl;
        }
    }
    return 0;
}