#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,pwer;
    cin>>n>>pwer;
    int orglN=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,pwer);
        n=n/10;
    }
    if(orglN == sum){
        cout<<"Armstrong Number ";
    }
    else{
        cout<<" Not Armstrong Number ";
    }
    return 0;
}