
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