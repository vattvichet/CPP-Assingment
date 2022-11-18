#include <iostream>
#include <map>
#include <iomanip>
using namespace std;
class decimal
{
private:
    int value;

public:
    decimal(int value)
    {
        this->value = value;
    }
    // function reverse number
    int reverse()
    {
        string temp_number, reversed_number;
        temp_number = to_string(value);
        for (int i = temp_number.length() - 1; i >= 0; i--)
        {
            reversed_number += temp_number[i];
        }
        value = stof(reversed_number);
        return value;
    }
    // function check number palindrome
    bool is_palindrome()
    {
        bool palindrome = false;
        if (value == reverse())
        {
            palindrome = true;
        }
        return palindrome;
    }
    // function check prime
    bool is_prime()
    {
        bool prime = true;
        for (int i = 2; i < value; i++)
        {
            if (value % i == 0)
            {
                prime = false;
            }
        }
        return prime;
    }
    // function convert number to binary
    string to_binary()
    {
        string reversed_binary, string_binary;

        while (true)
        {
            reversed_binary += to_string(value % 2);
            value = value / 2;

            if (value / 2 == 0)
            {
                reversed_binary += to_string(value % 2);
                break;
            }
        }
        for (int i = reversed_binary.length() - 1; i >= 0; i--)
        {
            string_binary += reversed_binary[i];
        }
        return string_binary;
    }
    // function convert number to word
    string to_words()
    {
        map<int, string> oneteen = {{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}, {10, "ten"}, {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"}};
        map<int, string> ty = {{2, "twenty"}, {3, "thirty"}, {4, "forty"}, {5, "fifty"}, {6, "sixty"}, {7, "seventy"}, {8, "eighty"}, {9, "ninety"}};
        string result;
        int ty_part;

        if (value == 0)
        {
            result = "zero";
        }
        else
        {
            result += oneteen.at(value / 100) + " hundred ";
            ty_part = value % 100;

            if (ty_part < 20)
            {
                result += oneteen.at(ty_part);
            }
            else
            {
                result += ty.at(ty_part / 10);

                if (ty_part % 10 > 0)
                {
                    result += "-" + oneteen.at(ty_part % 10);
                }
            }
        }
        return result;
    }
};
int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    decimal decimals(number);
    cout << "Reverse number : " << decimals.reverse() << endl;
    cout << "Is_palindrome  : " << decimals.is_palindrome() << endl;
    cout << "Is_prime       : " << decimals.is_prime() << endl;
    cout << "To_word        : " << decimals.to_words() << endl;
    cout << "To_convert     : " << decimals.to_binary() << endl;

    return 0;
}