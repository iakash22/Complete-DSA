#include<bits/stdc++.h>
using namespace std;
    vector<vector<string>> ans;
bool isPalindrome(string str,int st, int ed){
    while(st<=ed){
        if(str[st++] != str[ed--]) return false;
    }
    return true;
}
void solve(string str,vector<string> empty,int idx){
    if(idx == str.size()){
        ans.push_back(empty);
        return ;
    }

    for(int i=idx; i<str.size(); i++){
        if(isPalindrome(str,idx,i)){
            empty.push_back(str.substr(idx, i-idx+1));
            solve(str,empty,i+1);
            empty.pop_back();
        }
    }
}
int main(){
    string str = "aab";
    vector<string> empty;
    solve(str,empty,0);
    for(auto &st : ans){
        for(string arr : st){
            cout<<"'"<<arr<<"'"<<" ";
        }
        cout<<endl;
    }
return 0;
}