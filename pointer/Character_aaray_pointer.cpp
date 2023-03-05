#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[6] = {"abcde"};
    // cout<<&ch[0]<<endl;  // output print abcde
    // cout<<ch<<endl;  // output print abcde
    char *ptr = &ch[1];
    cout<<ptr;
    return 0;
}   