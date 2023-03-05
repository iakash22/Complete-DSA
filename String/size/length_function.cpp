#include<iostream>
using namespace std;
int main(){
    string str = "nincompoop";

    // cout<<str.size();
    // cout<<"\n"<<str.length();
    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<endl;
    }
    return 0;
}