#include <iostream>
#include <vector>
using namespace std;
struct Matrix
{
    vector<vector<string>> matrix = {
        {" ", " ", " "},
        {" ", " ", " "},
        {" ", " ", " "},
    };
    string getValue(int r, int c) { return matrix.at(r).at(c); }
    void setValue(int r, int c, string XO) { matrix.at(r).at(c) = XO; }
};
void displayMatrix(Matrix matrix);
bool checkWinner(Matrix matrix);
bool isXPlayer(int number);
int main()
{
    int row, column;
    Matrix matrix;
    cout << "[TicTacToe Game]" << endl;
    displayMatrix(matrix);
    for (int i = 0; i < 9; i++)
    {

        cout << "Enter row column for player " << (isXPlayer(i) ? "X" : "O")
             << " : ";
        cin >> row >> column;
        fflush(stdin);

        if (isXPlayer(i) == true)
        { // isXPlayer = true : Player X
            matrix.setValue(row, column, "X");
            displayMatrix(matrix);
        }
        else if (isXPlayer(i) == false)
        { // isXPlayer = false : Player O
            matrix.setValue(row, column, "O");
            displayMatrix(matrix);
        }
        if (i > 3)
        {

            if (checkWinner(matrix) == true)
                break;
        }
    }
    return 0;
}
bool isXPlayer(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    return false;
}
bool checkWinner(Matrix matrix)
{
    bool isWon = false;
    // check Horizontal
    for (int i = 0; i < 3; i++)
    {
        if ((matrix.getValue(i, 0) == "X") && (matrix.getValue(i, 1) == "X") &&
            (matrix.getValue(i, 2) == "X"))
        {
            cout << "X Player is the winner!" << endl;
            isWon = true;
            break;
        }
        if ((matrix.getValue(i, 0) == "O") && (matrix.getValue(i, 1) == "O") &&
            (matrix.getValue(i, 2) == "O"))
        {
            cout << "O Player is the winner!" << endl;
            isWon = true;
            break;
        }
    }
    // check Vertical
    for (int i = 0; i < 3; i++)
    {
        if ((matrix.getValue(0, i) == "X") && (matrix.getValue(1, i) == "X") &&
            (matrix.getValue(2, i) == "X"))
        {
            cout << "X Player is the winner!" << endl;
            isWon = true;
            break;
        }
        if ((matrix.getValue(0, i) == "O") && (matrix.getValue(1, i) == "O") &&
            (matrix.getValue(2, i) == "O"))
        {
            cout << "O Player is the winner!" << endl;
            isWon = true;
            break;
        }
    }
    // check RightDown
    if ((matrix.getValue(0, 2) == "X") && (matrix.getValue(1, 1) == "X") &&
        (matrix.getValue(2, 0) == "X"))
    {
        cout << "X Player is the winner!" << endl;
        isWon = true;
    }
    else if ((matrix.getValue(0, 2) == "O") && (matrix.getValue(1, 1) == "O") &&
             (matrix.getValue(2, 0) == "O"))
    {
        cout << "O Player is the winner!" << endl;
        isWon = true;
    }
    // check Left Down
    if ((matrix.getValue(0, 0) == "X") && (matrix.getValue(1, 1) == "X") &&
        (matrix.getValue(2, 2) == "X"))
    {
        cout << "X Player is the winner!" << endl;
        isWon = true;
    }
    else if ((matrix.getValue(0, 0) == "O") && (matrix.getValue(1, 1) == "O") &&
             (matrix.getValue(2, 2) == "O"))
    {
        cout << "O Player is the winner!" << endl;
        isWon = true;
    }
    return isWon;
}
void displayMatrix(Matrix matrix)
{
    cout << "-------------------" << endl;
    cout << "|  " << matrix.getValue(0, 0) << "  "
         << "|  " << matrix.getValue(0, 1) << "  "
         << "|  " << matrix.getValue(0, 2) << "  |" << endl;
    cout << "-------------------" << endl;
    cout << "|  " << matrix.getValue(1, 0) << "  "
         << "|  " << matrix.getValue(1, 1) << "  "
         << "|  " << matrix.getValue(1, 2) << "  |" << endl;
    cout << "-------------------" << endl;
    cout << "|  " << matrix.getValue(2, 0) << "  "
         << "|  " << matrix.getValue(2, 1) << "  "
         << "|  " << matrix.getValue(2, 2) << "  |" << endl;
    cout << "-------------------" << endl;
}