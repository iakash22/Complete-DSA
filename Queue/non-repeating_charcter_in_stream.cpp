#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
string solve(string str){
    unordered_map<char,int> count;
    queue<char> q;
    string ans;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        count[ch]++;
        q.push(ch);
        while(!q.empty()){
            if(count[ch] > 1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}
int main(){
    string str = "aabkddcwldlc";
    cout<<solve(str);


    return 0;
}