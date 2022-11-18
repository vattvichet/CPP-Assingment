#include <iostream>
#include <sstream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
    string lenght;
    stringstream StrDay, StrMonth, StrYear;
    string Day, Month, Year;

public:
    Date()
    {
        cout << "Input the date\n";
        cout << "input Day:";
        cin >> day;
        cout << "input Month:";
        cin >> month;
        cout << "input year:";
        cin >> year;
    }
    void Date_to_string();
    bool is_same_age_as(int days, int months, int years);
    bool is_older_than(int days, int months, int years);
};
void Date::Date_to_string()
{
    StrDay << day;
    StrDay >> Day;
    StrMonth << month;
    StrMonth >> Month;
    StrYear << year;
    StrYear >> Year;
    cout << "Day: " << Day << endl;
    cout << "Month: " << Month << endl;
    cout << "Year: " << Year << endl;
}
bool Date::is_same_age_as(int days, int months, int years)
{

    if (years == year)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Date::is_older_than(int days, int months, int years)
{
    if (years < year)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string Result;
    Date Date;
    int days, months, years;
    cout << "Input the date of birth of users\n";
    cout << "input day:";
    cin >> days;
    cout << "input month:";
    cin >> months;
    cout << "input year:";
    cin >> years;
    if (Date.is_same_age_as(days, months, years) == 1)
    {
        cout << "The user is the same age" << endl;
    }
    else
    {
        cout << "The user is not the same age" << endl;
    }
    if (Date.is_older_than(days, months, years) == 1)
    {
        cout << "The user is the older than" << endl;
    }
    else
    {
        cout << "The user is  not older  than" << endl;
    }
}