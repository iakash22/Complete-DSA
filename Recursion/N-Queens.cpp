#include<bits/stdc++.h>
using namespace std;

//  Space Complexity -->> O(n*m);
/* Time Compelxity -- >> 
                    T(N) = N * T(N-1) + O(N^2);
                        = O(N^3 + N!);
                        = O(N!); */

void display(bool board[][5], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j]){
                cout<<"Q"<<" ";
            }
            else{
                cout<<"X"<<" ";
            }
        }
        cout<<endl;
    }
}
bool isSafe(bool board[][5], int row, int col, int n){
    
    // check Vertical row
    for(int i=0; i<row; i++){
        if(board[i][col]){
            return false;
        }
    }

    // check Diagonal left
    int maxleft = min(row,col);
    for(int i=1; i<=maxleft; i++){
        if(board[row-i][col-i]){
            return false;
        }
    }

    // Check Diagonal Right
    int maxright = min(row,(n-col)-1);
    for(int i=1; i<=maxright; i++){
        if(board[row-i][col+i]){
            return false;
        }
    }

    return true;
}
int Queens(bool board[][5], int row, int n){
    if(row == n){
        // display(board,n);
        // cout<<endl;
        return 1;
    }

    int count = 0;

    // placing the queen and checking for every row and col
    for(int col = 0; col < n; col++){
        // place the queen if it is safe
        if(isSafe(board, row, col, n)){
            board[row][col] = true;
            count += Queens(board, row+1, n);
            board[row][col] = false;
        }
    }

    return count;
}
int main(){
    int n = 5;
    bool board[5][5]; 
    cout<<Queens(board,0,n);

return 0;
}