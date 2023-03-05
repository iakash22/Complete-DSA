#include<iostream>
using namespace std;
int main(){
    string str = "786";
    int x;
    x = stoi(str);
    // cout<<x+2;
    // int x = 786;
    // cout<<to_string(x) + "2";
    char ch = str[0];
    // cout<<ch;
    string temp;
    temp.push_back(ch);
    int n = stoi(temp);
    cout<<n+1;

}