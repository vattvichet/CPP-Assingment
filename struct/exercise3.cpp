#include <iostream>
using namespace std;
int main()
{
    char option;
    cout << "Choose a letter : \n";
    cin >> option;

    struct Student
    {
        int id;
        string name;
        int age;
        struct Marks
        {
            double chem_mark;
            double maths_mark;
            double phy_mark;

        } mark;
    } student[] = {
        {2003, "Luke", 19, 47, 50, 50},
        {2001, "Pink", 21, 30, 36, 59},
        {2004, "You", 18, 50, 47, 45},
        {2003, "Bang", 19, 35, 29, 47},
        {2000, "Ink", 20, 49, 50, 49}};

    if (option == 'a')
    {
        struct Student temp;

        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (student[i].id > student[j].id)
                {

                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }
        for (int i = 0; i < 5; i++)
        {
            cout << "ID : " << student[i].id << "\t"
                 << "Name : " << student[i].name << "\t"
                 << "Age : " << student[i].age << "\t"
                 << "Chem_mark : "
                 << student[i].mark.chem_mark << "\t\t"
                 << "maths_mark : " << student[i].mark.maths_mark << "\t\t"
                 << "phy_mark : " << student[i].mark.phy_mark << endl;
        }

        cout << endl;
    }

    if (option == 'b')
    {
        struct Student temp;
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (student[i].name > student[j].name)
                {

                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }
        cout << "The countries are :" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "ID : " << student[i].id << "\t"
                 << "Name : " << student[i].name << "\t"
                 << "Age : " << student[i].age << "\t"
                 << "Chem_mark : "
                 << student[i].mark.chem_mark << "\t\t"
                 << "maths_mark : " << student[i].mark.maths_mark << "\t\t"
                 << "phy_mark : " << student[i].mark.phy_mark << endl;
        }
    }
    if (option == 'c')
    {
        struct Student temp;
        double totalScore[5];
        for (int i = 0; i < 5; i++)
        {
            double total[i];
            total[i] = student[i].mark.chem_mark + student[i].mark.maths_mark + student[i].mark.phy_mark;
            totalScore[i] = total[i];
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (totalScore[i] > totalScore[j])
                {
                    // struct sorting
                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                    // total score sorting
                    double tempScore;
                    tempScore = totalScore[i];
                    totalScore[i] = totalScore[j];
                    totalScore[j] = tempScore;
                }
            }
        }
        for (int i = 0; i < 5; i++)
        {
            cout << "Total Score : " << totalScore[i] << "\t"
                 << "ID : " << student[i].id << "\t"
                 << "Name : " << student[i].name << "\t"
                 << "Age : " << student[i].age << "\t"
                 << "Chem_mark : "
                 << student[i].mark.chem_mark << "\t\t"
                 << "maths_mark : " << student[i].mark.maths_mark << "\t\t"
                 << "phy_mark : " << student[i].mark.phy_mark << endl;
        }
    }
    return 0;
}