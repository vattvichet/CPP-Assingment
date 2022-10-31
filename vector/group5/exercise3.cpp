#include <iostream>
#include <vector>
using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
    string department;

    struct JoinedDate
    {
        int day;
        int month;
        int year;
    } joinedDate;
};

int main()
{

    vector<Employee> employee = {

        {1, "Jacke", 100, "V.Editor", 18, 7, 2021},
        {2, "Tommy", 750, "Designer", 23, 1, 2022},
        {3, "Baker", 400, "V.Editor", 21, 5, 2021},
        {4, "Vichet", 500, "IT Oficer", 12, 6, 2022}};
    //

    char option;
    cout << "Enter a letter : ";
    cin >> option;

    if (option == 'a')
    {
        for (Employee em : employee)
            cout << "ID : " << em.id << "\t"
                 << " Name : " << em.name << "\t"
                 << "Salary : " << em.salary << "\t"
                 << "Department : " << em.department << "\t"
                 << " Day : " << em.joinedDate.day << "\t"
                 << " Month : " << em.joinedDate.month << "\t"
                 << " Year : " << em.joinedDate.year << endl;
        cout << employee.size();
    }
    else if (option == 'b')
    {

        vector<Employee> temp(employee.begin(), employee.end());

        for (int i = 0; i < employee.size(); i++)
        {
            for (int j = i + 1; j < employee.size(); j++)
            {
                if (employee[i].salary > employee[j].salary)
                {
                    temp[i] = employee[i];
                    employee[i] = employee[j];
                    employee[j] = temp[i];
                }
            }
        }

        for (int i = 0; i < employee.size(); i++)
        {
            cout << "ID : " << employee[i].id << "\t"
                 << " Name : " << employee[i].name << "\t"
                 << "Salary : " << employee[i].salary << "\t"
                 << "Department : " << employee[i].department << "\t"
                 << " Day : " << employee[i].joinedDate.day << "\t"
                 << " Month : " << employee[i].joinedDate.month << "\t"
                 << " Year : " << employee[i].joinedDate.year << endl;
        }
    }
    else if (option == 'c')
    {
        Employee tempInsert;
        tempInsert.id = 6;
        tempInsert.name = "Kimmy";
        tempInsert.salary = 630;
        tempInsert.department = "PhotoShop";
        tempInsert.joinedDate.day = 21;
        tempInsert.joinedDate.month = 05;
        tempInsert.joinedDate.year = 2020;

        // Add
        employee.push_back(tempInsert);

        for (int i = 0; i < employee.size(); i++)
        {
            cout << "ID : " << employee[i].id << "\t"
                 << " Name : " << employee[i].name << "\t"
                 << "Salary : " << employee[i].salary << "\t"
                 << "Department : " << employee[i].department << "\t"
                 << " Day : " << employee[i].joinedDate.day << "\t"
                 << " Month : " << employee[i].joinedDate.month << "\t"
                 << " Year : " << employee[i].joinedDate.year << endl;
        }
    }
    else if (option == 'd')
    {
        int deleteID;
        cout << "Enter the ID : ";
        cin >> deleteID;
        for (int i = 0; i < employee.size(); i++)
        {
            if (employee[i].id == deleteID)
            {
                employee.erase(employee.begin() + i);
            }
        }
        for (int i = 0; i < employee.size(); i++)
        {
            cout << "ID : " << employee[i].id << "\t"
                 << " Name : " << employee[i].name << "\t"
                 << "Salary : " << employee[i].salary << "\t"
                 << "Department : " << employee[i].department << "\t"
                 << " Day : " << employee[i].joinedDate.day << "\t"
                 << " Month : " << employee[i].joinedDate.month << "\t"
                 << " Year : " << employee[i].joinedDate.year << endl;
        }
    }
    else if (option == 'e')
    {

        int updateID;
        cout << "Enter the ID : ";
        cin >> updateID;
        cout << endl
             << "Employee : " << updateID << " Information" << endl
             << endl;
        cout << "ID : " << employee[updateID - 1].id << "\t"
             << " Name : " << employee[updateID - 1].name << "\t"
             << "Salary : " << employee[updateID - 1].salary << "\t"
             << "Department : " << employee[updateID - 1].department << "\t"
             << " Day : " << employee[updateID - 1].joinedDate.day << "\t"
             << " Month : " << employee[updateID - 1].joinedDate.month << "\t"
             << " Year : " << employee[updateID - 1].joinedDate.year << endl
             << endl;

        for (int i = 0; i < employee.size(); i++)
        {
            if (employee[i].id == updateID)
            {
                cout << "(Update form Name/Salary/Department) (Day/Month/Year) : "
                     << endl;

                employee[i].id = updateID;
                cin >> employee[i].name;
                cin >> employee[i].salary;
                cin >> employee[i].department;
                cin >> employee[i].joinedDate.day;
                cin >> employee[i].joinedDate.month;
                cin >> employee[i].joinedDate.year;
            }
        }
        for (int i = 0; i < employee.size(); i++)
        {
            cout << "ID : " << employee[i].id << "\t"
                 << " Name : " << employee[i].name << "\t"
                 << "Salary : " << employee[i].salary << "\t"
                 << "Department : " << employee[i].department << "\t"
                 << " Day : " << employee[i].joinedDate.day << "\t"
                 << " Month : " << employee[i].joinedDate.month << "\t"
                 << " Year : " << employee[i].joinedDate.year << endl;
        }
    }

    return 0;
}