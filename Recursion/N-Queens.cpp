// #include<bits/stdc++.h>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    unordered_map<int, bool> checkRow;
    unordered_map<int, bool> checkUpperLeft;
    unordered_map<int, bool> checkBottomLeft;
    bool isSafe(vector<string> board, int row, int col, int n)
    {

        if (checkRow[col] == true)
            return false;
        if (checkUpperLeft[n - 1 + col - row] == true)
            return false;
        if (checkBottomLeft[row + col] == true)
            return false;

        return true;
    }
    void solve(int row, int n, vector<string> board, vector<vector<string> > &ans)
    {
        if (row == n)
        {
            ans.push_back(board);
            return;
        }

        // placing the queen and checking for every row and col
        for (int col = 0; col < n; col++)
        {
            // place the queen if it is safe
            if (isSafe(board, row, col, n))
            {
                board[row][col] = 'Q';
                checkRow[col] = true;
                checkUpperLeft[n - 1 + col - row] = true;
                checkBottomLeft[row + col] = true;
                solve(row + 1, n, board, ans);
                board[row][col] = '.';
                checkRow[col] = false;
                checkUpperLeft[n - 1 + col - row] = false;
                checkBottomLeft[row + col] = false;
            }
        }
    }
    vector<vector<string> > solveNQueens(int n)
    {
        vector<vector<string> > ans;
        vector<string> str(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            str[i] = s;
        }
        solve(0, n, str, ans);
        return ans;
    }
};

//  Space Complexity -->> O(n*m);
/* Time Compelxity -- >>
                    T(N) = N * T(N-1) + O(N^2);
                        = O(N^3 + N!);
                        = O(N!); */

void display(bool board[][5], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j])
            {
                cout << "Q"
                    << " ";
            }
            else
            {
                cout << "X"
                    << " ";
            }
        }
        cout << endl;
    }
}
bool isSafe(bool board[][5], int row, int col, int n)
{

    // check Vertical row
    for (int i = 0; i < row; i++)
    {
        if (board[i][col])
        {
            return false;
        }
    }

    // check Diagonal left
    int maxleft = min(row, col);
    for (int i = 1; i <= maxleft; i++)
    {
        if (board[row - i][col - i])
        {
            return false;
        }
    }

    // Check Diagonal Right
    int maxright = min(row, (n - col) - 1);
    for (int i = 1; i <= maxright; i++)
    {
        if (board[row - i][col + i])
        {
            return false;
        }
    }

    return true;
}
int Queens(bool board[][5], int row, int n)
{
    if (row == n)
    {
        display(board, n);
        cout << endl;
        return 1;
    }

    int count = 0;

    // placing the queen and checking for every row and col
    for (int col = 0; col < n; col++)
    {
        // place the queen if it is safe
        if (isSafe(board, row, col, n))
        {
            board[row][col] = true;
            count += Queens(board, row + 1, n);
            board[row][col] = false;
        }
    }

    return count;
}
int main()
{
    int n = 5;
    bool board[5][5];
    cout << Queens(board, 0, n);

    return 0;
}