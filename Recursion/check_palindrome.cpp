#include<iostream>
using namespace std;
bool isPalindrome(string str,int st,int ed){
    if(st>ed /* (str.size()-1)/2*/){
        return true;
    }

    if(str[st] != str[ed /*str.size()-1-st*/]){
        return false;
    }
    else{
        return isPalindrome(str,st+1,ed-1);
    }
}
int main(){
    string name = "meraloolarem";

    cout<<isPalindrome(name,0,name.size()-1);

    return 0;
}