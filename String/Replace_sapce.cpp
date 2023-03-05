#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "on my mind";
    
    string temp;
    for(int i=0; i<str.size(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    cout<<temp;
    // cin.getline(str, 20);
}