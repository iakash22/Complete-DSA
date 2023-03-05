#include<bits/stdc++.h>
using namespace std;
int knapsack_theif(int val[],int wet[],int begWet,int n){
    if(n == 0 || begWet == 0){
        return 0;
    }
    if(wet[n-1] > begWet){
        return knapsack_theif(val,wet,begWet,n-1);
    }
    return max(knapsack_theif(val,wet,begWet - wet[n-1],n-1) + val[n-1], knapsack_theif(val,wet,begWet,n-1));
}
int main(){
    int val[3] = {100,50,150};
    int wet[3] = {10,30,20};
    int begWet = 50;
    cout<<knapsack_theif(val,wet,begWet,3);
return 0;
}