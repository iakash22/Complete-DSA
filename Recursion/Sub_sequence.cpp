#include<iostream>
using namespace std;
void duplcate_sub(string str, string empty, int index){
    // if(index == str.size()){
    cout<<empty<<endl;
    // return;
    // }
    for(int i=index; i<str.size(); i++){
        if(i != index && str[i] == str[i-1]) continue;
        empty.push_back(str[i]);
        duplcate_sub(str, empty, i+1);
        empty.pop_back();
    }
}
void subst1(string str,string ans,int index){
    if(index == str.size()){
        cout<<ans<<endl;
        return ;
    }

    //Exclude
    subst1(str,ans,index+1);

    //include
    ans.push_back(str[index]);
    subst1(str,ans,index+1);
}
void subset(string str,string empty){
    if(str.size() == 0){
        cout<<empty<<endl;
        return;
    }
    char ch = str[0];
    subset(str.substr(1),empty);
    subset(str.substr(1),empty+ch);
}
void subst2(string str,string ans){
    if(str.size() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    string ros = str.substr(1);

    subst2(ros,ans);
    subst2(ros,ans+ch);
}
int main(){
    string str = "122";
    // cout<<"substr1"<<endl;
    // subst1(str,"",0);
    // cout<<endl;
    // cout<<"substr2"<<endl;
    // subst2(str,"");

    // subset(str,"");
    duplcate_sub(str,"",0);
    return 0;
}