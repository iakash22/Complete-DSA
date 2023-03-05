#include<iostream>
using namespace std;
int main(){
    string s1 = "abc";
    string s2 = "abc";

    sort(s1.begin(), s1.end());
    cout<<s1;
// if(! s1.compare(s2))
// cout<<"String are equal";
    // cout<<s1.compare(s2);

    return 0;
}