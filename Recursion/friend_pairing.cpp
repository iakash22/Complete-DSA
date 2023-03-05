#include<bits/stdc++.h>
using namespace std;
int friend_Pairing(int n){
    if(n == 0 || n == 1 || n == 2){
        return n;
    }

    return friend_Pairing(n-1) + friend_Pairing(n-2) * (n-1);
}
int main(){
    cout<<friend_Pairing(8);

return 0;
}