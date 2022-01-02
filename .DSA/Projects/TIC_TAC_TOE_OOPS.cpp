#include <bits/stdc++.h>
using namespace std;

string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
int num[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

bool Wronginput(int x)
{
    if (x < 1 || x > 9)
    {
        cout << "Entered position is out of range please input again!" << endl;
        return true;
    }
    return false;
}

void IndexFinder(int x, int &i, int &j)
{
    i = 0;
    j = 2;
    while (i < 3 && j >= 0)
    {
        if (num[i][j] > x)
        {
            j--;
        }
        else if (num[i][j] < x)
        {
            i++;
        }
        else
        {
            return;
        }
    }
}

void Display()
{
    cout << "-------------------------" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "  " << board[i][j] << "  ";
        }
        cout << endl;
        cout << endl;
    }
    cout << "-------------------------" << endl;
}

bool Overwrite(int i, int j)
{
    if (board[i][j] == "X" || board[i][j] == "O")
    {
        cout << "Position already occupied !!" << endl;
        cout << "Try another one" << endl;
        return true;
    }
    return false;
}

//checking for a winner
bool check(string n)
{
    if (board[0][0] == n && board[0][1] == n && board[0][2] == n)
    {
        return true;
    }
    else if (board[0][0] == n && board[1][0] == n && board[2][0] == n)
    {
        return true;
    }
    else if (board[2][0] == n && board[2][1] == n && board[2][2] == n)
    {
        return true;
    }
    else if (board[2][2] == n && board[1][2] == n && board[0][2] == n)
    {
        return true;
    }
    else if (board[0][0] == n && board[1][1] == n && board[2][2] == n)
    {
        return true;
    }
    else if (board[2][0] == n && board[1][1] == n && board[0][2] == n)
    {
        return true;
    }
    else if (board[1][0] == n && board[1][1] == n && board[1][2] == n)
    {
        return true;
    }
    else if (board[0][1] == n && board[1][1] == n && board[2][1] == n)
    {
        return true;
    }

    return false;
}

class Player1
{
    string player1;
    int p1;

public:
    void setName()
    {
        cout << "Player 1 please enter your name : ";
        cin >> player1;
    }

    string getName()
    {
        return player1;
    }
    void inputP1()
    {
        Display();
        cout << player1 << "'s turn -> " << endl;
        cout << "Enter the positon : ";
        cin >> p1;
        if (Wronginput(p1))
        {
            inputP1();
        }
        int i, j;
        IndexFinder(p1, i, j);
        if (Overwrite(i, j))
        {
            inputP1();
        }
        else
        {
            board[i][j] = "X";
        }
    }
};

class Player2
{
    int p2;
    string player2;

public:
    void setName()
    {
        cout << "Player 2 please enter your name : ";
        cin >> player2;
    }
    string getName()
    {
        return player2;
    }
    void inputP2()
    {
        Display();
        cout << player2 << "'s turn -> " << endl;
        cout << "Enter the positon : ";
        cin >> p2;
        if (Wronginput(p2))
        {
            inputP2();
        }
        int i, j;
        IndexFinder(p2, i, j);
        if (Overwrite(i, j))
        {
            inputP2();
        }
        else
        {
            board[i][j] = "O";
        }
    }
};

int main()
{
    Player1 a;
    Player2 b;
    a.setName();
    b.setName();
    int step = 1;
    while (step < 10)
    {
        if (step % 2)
        {
            a.inputP1();
            if (check("X"))
            {
                Display();
                cout << a.getName() << " has won the game!!" << endl;
                exit(0);
            }
        }
        else
        {
            b.inputP2();
            if (check("O"))
            {
                Display();
                cout << b.getName() << " has won the game!!" << endl;
                exit(0);
            }
        }
        step++;
    }
    cout << "Match Drawn!! Well played" << endl;
    return 0;
}