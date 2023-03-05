#include<bits/stdc++.h>
using namespace std;
void display(bool board[][4], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == true){
                cout<<"K"<<" ";
            }
            else{
                cout<<"X"<<" ";
            }
        }
        cout<<endl;
    }
}

// do not repeat yourself, hence created this function
bool isValid(bool board[][4], int row, int col,int n){
    if((row >= 0 && row < n) && (col >= 0 && col < n)){
        return true;
    }
    return false;
}

bool isSafe(bool board[][4], int row, int col, int n){
    if(isValid(board, row - 2, col - 1, n)){
        if(board[row - 2][col - 1]){
            return false;
        }
    }

    if(isValid(board, row - 1, col - 2, n)){
        if(board[row - 1][col - 2]){
            return false;
        }
    }

    if(isValid(board, row - 2, col + 1, n)){
        if(board[row - 2][col + 1]){
            return false;
        }
    }

    if(isValid(board, row - 1, col + 2, n)){
        if(board[row - 1][col + 2]){
            return false;
        }
    }

    return true;
}
void knight(bool board[][4], int row, int col, int knights,int n){
    if(knights == 0){
        display(board,n);
        cout<<endl;
        return ;
    }

    if(row == n-1 && col == n){
        return;
    }

    if(col == n){
        knight(board, row+1, 0, knights, n);
        return;
    }

    if(isSafe(board, row, col, n)){
        board[row][col] = true;
        knight(board, row, col + 1, knights - 1, n);
        board[row][col] = false;
    }

    knight(board, row, col + 1, knights, n);
}
int main(){
    bool board[4][4];
    // bool board[4][4] = {{false, false, false, false},
    //                     {false, false, false, false},
    //                     {false, false, false, false}, 
    //                     {false, false, false, false} };
    knight(board, 0, 0, 4, 4);
    // display(board,4);

return 0;
}