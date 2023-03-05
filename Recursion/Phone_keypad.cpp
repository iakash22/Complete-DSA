#include<iostream>
using namespace std;
string keypadArr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad1(string str,string ans){
    if(str.size() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = str[0];
    string code = keypadArr[ch-'0'];
    // string ros = str.substr(1);

    for(int i=0; i<code.length(); i++){
        keypad1(str.substr(1), ans+code[i]);
    }
}
void keypad2(string str,string empty){
    if(str.size() == 0){
        cout<<empty<<endl;
        return ;
    }
    char digit = str[0] - '0';
    for(int i=(digit - 1) * 3; i < digit * 3; i++){
        char ch = (char)('a'+ i);
        keypad2(str.substr(1),empty+ch);
    }
}
int main(){
    string str = "12";
    // keypad1(str,"");
    keypad2(str,"");
    return 0;
}
