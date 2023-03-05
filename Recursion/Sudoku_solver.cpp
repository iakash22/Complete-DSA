#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<char>>& board,int row,int col,char number){
        for(int i=0; i<9; i++){
            if(board[row][i] == number) return false;
            if(board[i][col] == number) return false;
            if(board[(3 * (row/3)) + (i / 3)][(3 * (col/3)) + (i % 3)] == number){
                    return false;
                }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j] == '.'){
                    for(char number = '1'; number <= '9'; number++){
                        if(isSafe(board,i,j,number)){
                            board[i][j] = number;
                            if(solve(board)){ return true;}
                            else {board[i][j] = '.';}
                        }
                    }
                    return false;
                }
            }   
        }
        return true;
    }
// Space Complexity -->> O(n*m);
// Time Complexity -->> O(9^n^2);
void display(int board[][9], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] <<"  ";
        }
        cout << endl;
    }
}
bool isSafe(int board[][9], int row, int col, int num, int n)
{
    // check the row
    for (int i = 0; i < n; i++)
    {
        // check if the number is the row
        if (board[row][i] == num)
        {
            return false;
        }
    }

    // check the col
    for (int i = 0; i < n; i++)
    {
        // check if the number is the row
        if (board[i][col] == num)
        {
            return false;
        }
    }

    int sq = (int)(sqrt(n));
    int rowstart = row - row % sq;
    int colstart = col - col % sq;

    for (int r = rowstart; r < rowstart + sq; r++)
    {
        for (int c = colstart; c < colstart + sq; c++)
        {
            if (board[r][c] == num)
            {
                return false;
            }
        }
    }
    return true;
}
bool solve(int board[][9], int n)
{
    int row = -1;
    int col = -1;

    bool emptyleft = true;

    // this is how we are replacing the r,c from arguments
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 0)
            {
                row = i;
                col = j;
                emptyleft = false;
                break;
            }
        }
        // if you found some empty element in row, then break;
        if (emptyleft == false)
        {
            break;
        }
    }

    if (emptyleft == true)
    {
        return true;
        // sudoku is  solved !!!!!!!!
    }

    // Backtrack
    for (int number = 1; number <= 9; number++)
    {
        if (isSafe(board, row, col, number, n))
        {
            board[row][col] = number;
            if (solve(board, n))
            {
                // found the answer
                // display(board, n);
                // cout<<endl;
                return true;
            }
            else
            {
                // backtrack
                board[row][col] = 0;
            }
        }
    }
    return false;
}

int main()
{
    int board[9][9] = { { 5, 3, 0, 0, 7, 0, 0, 0, 0 },
                        { 6, 0, 0, 1, 9, 5, 0, 0, 0 },
                        { 0, 9, 8, 0, 0, 0, 0, 6, 0 },
                        { 8, 0, 0, 0, 6, 0, 0, 0, 3 },
                        { 4, 0, 0, 8, 0, 3, 0, 0, 1 },
                        { 7, 0, 0, 0, 2, 0, 0, 0, 6 },
                        { 0, 6, 0, 0, 0, 0, 2, 8, 0 },
                        { 0, 0, 0, 4, 1, 9, 0, 0, 5 },
                        { 0, 0, 0, 0, 8, 0, 0, 7, 9 }};

    if(solve(board, 9)){
        display(board,9);
    }
    else{
        cout<<"sudoku cannot solve";
    }

    return 0;
}