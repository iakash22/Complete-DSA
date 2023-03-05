#include<iostream>
using namespace std;
int count_zero(int n,int count){
    if(n == 0){
        return count;
    }
    if(n%10 == 0){
        return count_zero(n/10, count+1);
    }
    else{
        return count_zero(n/10,count);
    }
}
int main(){
    int n;
    cin>>n;

    cout<<count_zero(n,0);

    return 0;
}