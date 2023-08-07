#include<iostream>
#include<vector>
using namespace std;
void solve(int open,int close,vector<string> &ans,string str){
    if(open == 0 && close == 0){
        ans.push_back(str);
        return;
    }

    if(open > 0){
        str.push_back('(');
        solve(open-1,close,ans,str);
        str.pop_back();
    }
    if(open < close){
        str.push_back(')');
        solve(open,close-1,ans,str);
        str.pop_back();
    }
}

int main(){
    int n = 4;
    int open = n;
    int close = n;
    vector<string> ans;
    string str;

    solve(open,close,ans,str);

    for(auto val : ans){
        cout<<val<<endl;
    }

    return 0;
}