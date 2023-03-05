#include<iostream>
using namespace std;
string Move_X(string str){
if(str.size() == 0){
    return "";
}
char ch = str[0];
string ans = Move_X(str.substr(1));
if(ch == 'x'){
    return ans+ch;
}
return ch+ans;
}
int main(){
    string str = "axxbdxcefxhix";
    cout<<Move_X(str);

    return 0;
}