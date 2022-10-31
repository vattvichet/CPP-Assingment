#include <iostream> //to use std::cout
using namespace std;

void checkpassword(string &input)
{
    int n = input.length();
    // Checking lower alphabet in string
    // declaring a boolean variable with true value
    bool hasLower = false, hasUpper = false;
    bool hasDigit = false, specialChar = false;
    string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
    for (int i = 0; i < n; i++)
    {
        if (islower(input[i]))
            hasLower = true;
        if (isupper(input[i]))
            hasUpper = true;
        if (isdigit(input[i]))
            hasDigit = true;
        size_t special = input.find_first_not_of(normalChars);
        if (special != string::npos)
            specialChar = true;
    }
    // check the valid of password
    cout << "Your password is : ";
    if (hasLower && hasUpper && hasDigit && specialChar && (n = 8))
        cout << "Invalid password. Don't input the special characters" << endl;
    else if (hasLower && hasUpper && hasDigit && specialChar && (n < 8))
        cout << "Invalid password. Don't input the special characters" << endl;
    else if (hasLower && hasUpper && hasDigit && specialChar && (n > 8))
        cout << "Invalid password. Don't input the special characters" << endl;
    else if (hasLower && hasDigit && specialChar && (n = 8))
        cout << "Invalid password. Don't input the special characters" << endl;
    else if (hasUpper && hasDigit && specialChar && (n = 8))
        cout << "Invalid password. Don't input the special characters" << endl;
    else if (hasLower && hasUpper && hasDigit && (n < 8))
        cout << "Invalid password. You must input 8 character" << endl;
    else if (hasLower && hasUpper && hasDigit && (n > 8))
        cout << "Invalid password. You must input only 8 character" << endl;
    else if (hasDigit && hasUpper && hasLower && (n = 8))
        cout << "valid password" << endl;
    else if (hasUpper && hasDigit && (n = 8))
        cout << "Invalid password. You must input the lowercase character" << endl;
    else if (hasUpper && hasDigit && (n > 8))
        cout << "Invalid password. You must input the lowercase character and only 8 character" << endl;
    else if (hasUpper && hasDigit && (n < 8))
        cout << "Invalid password. You must input the lowercase character  and 8 character" << endl;
    else if (hasLower && hasDigit && (n = 8))
        cout << "Invalid password. You must input the uppercase character" << endl;
    else if (hasLower && hasDigit && (n > 8))
        cout << "Invalid password. You must input the uppercase character and ouly 8 character" << endl;
    else if (hasLower && hasDigit && (n < 8))
        cout << "Invalid password. You must input the uppercase character  and 8 character" << endl;
}

int main()
{
    cout << " A password must have exactly 8 characters." << endl;
    cout << " A password must consist of only digits and letters." << endl;
    cout << " A password must always start with a digit." << endl;
    cout << " A password must contain at least one uppercase letter." << endl;
    string password;
    cout << "Enter password" << endl;
    getline(cin, password); // a standard library funtion that is used to read a string or a line
    checkpassword(password);
    return 0; // return o to operating system
}
