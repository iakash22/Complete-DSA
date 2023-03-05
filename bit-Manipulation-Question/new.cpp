#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; 
    // if(n&1 == 1){
    //     cout<<"odd";
    // }
    // else
    //     cout<<"even";
    int dbl = n>>1;  // right shift
    int dbl = n<<1;  // Left shift
    cout<<dbl;
return 0;
}