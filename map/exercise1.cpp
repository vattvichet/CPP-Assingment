#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

void display_info(map<int, map<string, string>> employee_info)
{
    cout << "________________________________________________\n";
    cout << "ID |    Department  |      Name      |  Salary  |\n";
    cout << "___|________________|________________|__________|\n";
    for (auto person : employee_info)
    {
        cout << setw(10) << left << person.first;
        for (auto emp : person.second)
        {
            cout << setw(15) << left << emp.second;
        }
        cout << endl;
    }
    cout << "______________________________________________";
}
void add_employee(map<int, map<string, string>> &employee_info)
{
    string name, salary, department;
    int id;
    char result;
    int increm = employee_info.size() + 1;

    cout << "Enter employee department: ";
    cin.ignore();
    getline(cin, department);
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter initial salary: ";
    getline(cin, salary);

    employee_info.insert({increm,
                          {{"Department", department},
                           {"Name", name},
                           {"Salary", salary}}});
    cout << "---------------------------------------------\n";
    cout << "ID   |  Department   |    Name    |      Salary\n";
    cout << "---------------------------------------------\n";
    for (auto person : employee_info)
    {
        cout << setw(7) << left << person.first;
        for (auto emp : person.second)
        {
            cout << setw(17) << left << emp.second;
        }
        cout << endl;
    }
    cout << "---------------------------------------------";
}

void delete_employee(map<int, map<string, string>> &employee_info)
{
    int id;
    char result;
    do
    {
        cout << "Enter employee Id: ";
        cin >> id;
        employee_info.erase(id);
        cout << "---------------------------------------------\n";
        cout << "ID   |  Department   |    Name     |     Salary\n";
        cout << "---------------------------------------------\n";
        for (auto person : employee_info)
        {
            cout << setw(7) << left << person.first;
            for (auto emp : person.second)
            {
                cout << setw(17) << left << emp.second;
            }
            cout << endl;
        }
        cout << "---------------------------------------------";
        cout << "\nDo you want to repeat the program? y/n: ";
        cin >> result;
    } while (result != 'n');
}

void update_info(map<int, map<string, string>> &employee_info)
{
    string name, salary, department;
    int id;
    char result;
    do
    {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Update employee department: ";
        cin.ignore();
        getline(cin, department);
        cout << "Update employee name: ";
        getline(cin, name);
        cout << "Update salary: ";
        getline(cin, salary);

        employee_info[id]["Department"] = department;
        employee_info[id]["Name"] = name;
        employee_info[id]["Salary"] = salary;

        cout << "---------------------------------------------\n";
        cout << "ID   |  Department   |    Name      |  Salary\n";
        cout << "---------------------------------------------\n";
        for (auto person : employee_info)
        {
            cout << setw(7) << left << person.first;
            for (auto emp : person.second)
            {
                cout << setw(17) << left << emp.second;
            }
            cout << endl;
        }
        cout << "---------------------------------------------";
        cout << "\n Do you want to repeat the program? y/n: ";
        cin >> result;
    } while (result != 'n');
}
int main()
{
    char result, options;
    map<int, map<string, string>> employee_info = {
        {1, {{"Name", "Sok Sophea"}, {"Salary", "900"}, {"Department", "ITE"}}},
        {2, {{"Name", "Chan Dara"}, {"Salary", "800"}, {"Department", "BioE"}}},
        {3, {{"Name", "keo Tola"}, {"Salary", "500"}, {"Department", "TEE"}}}};
    do
    {
        cout << "-----------Employees Database------------";
        cout << "\na. Display all employees.\nb. Add a new employee.\nc. Delete an employee by id.\nd. Update an employee given an id.\ne. Exit the program";
        cout << "\n\n";
        cout << " Options: ";
        cin >> options;
        switch (options)
        {
        case 'a':
            display_info(employee_info);
            break;
        case 'b':
            add_employee(employee_info);
            break;
        case 'c':
            delete_employee(employee_info);
            break;
        case 'd':
            update_info(employee_info);
            break;
        case 'e':
            return (0);
        }
        cout << "\nRepeat the Program with new informations? y/n: ";
        cin >> result;
    } while (result != 'n');
    return 0;
}