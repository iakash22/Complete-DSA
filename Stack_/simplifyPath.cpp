#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<string> &st,string &ans){
    if(st.empty()){
        return ;
    }
    string temp = st.top();
    st.pop();
    reverseStack(st,ans);
    ans += temp;
}
string simplifyPath(string path){
    if(path.empty()) return "";
    stack<string> st;
    int i = 0;
    while(i < path.size()){
        int j = i+1;
        while(j<path.size() && path[j] != '/'){
            j++;
        }
        string temp = path.substr(i,j-i);
        i = j;
        if(temp == "/" || temp == "/."){
            continue;
        }
        if(temp != "/.."){
            st.push(temp);
        }
        else if(!st.empty()){
            st.pop();
        }
    }

    if(st.empty()) return "/";
    string ans = "";
    reverseStack(st,ans);
    return ans;
}
int main(){
    string path = "/a/c/b///../../";
    string ans = simplifyPath(path);
    cout<<ans<<endl;

    return 0;
}