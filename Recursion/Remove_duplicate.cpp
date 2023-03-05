#include<iostream>
using namespace std;
// Remove 'a'
void skip1(string str,string empty){
    if(str.size() == 0){
        cout<<empty;
        return ;
    }
    char ch = str[0];
    if(ch == 'a'){
        skip1(str.substr(1),empty);
    }
    else
    skip1(str.substr(1),empty+ch);
}
string skip2(string str){
    if(str.size() == 0){
        return "";
    }
    
    char ch = str[0];
    if(ch == str[1]){
        return skip2(str.substr(1));
    }
    else{
        return ch + skip2(str.substr(1));
    }
}
string skip3(string str){
    if(str.empty()){
        return "";
    }

    if(str.find("apple")){
        return skip3(str.substr(5));
    }
    else{
        return str[0] + skip3(str.substr(1));
    }
}
string removedup(string str){
    if(str.length() == 0){
        return "";
    }

    char ch = str[0];
    string ans = removedup(str.substr(1));
    if(ch == ans[0]){
        return ans;
    }

    return (ch+ans);
}
int main(){
    string str = "aaabbcccddde";
    // cout<<removedup(str);
    // skip1(str,"");
    // cout<<endl;
    // cout<<skip2(str);
    // cout<<skip3("abcapplelfg");
    string str1 = "abcappleelfg";
    cout<<str1.erase(str1.find("apple"),5);
    return 0;
}