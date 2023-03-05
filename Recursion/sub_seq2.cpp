#include<iostream>
using namespace std;
void subst(string str,string ans){
    if(str.size() == 0){
        cout<<ans<<endl;
        return ;
    }

    char ch = str[0];
    int code = ch;
    string ros = str.substr(1);

    subst(ros,ans);
    subst(ros,ans+ch);
    subst(ros,ans+to_string(code));
}
int main(){
    string str = "AB";
    subst(str,"");

    return 0;
}