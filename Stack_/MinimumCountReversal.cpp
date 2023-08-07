#include<bits/stdc++.h>
using namespace std;
int countRev (string s)
{
    // your code here
    if(s.size()%2 == 1)return -1;
    stack<char> st;
    for(auto ch : s){
        if(ch == '{') st.push(ch);
        else{
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    int count = 0;
    while(!st.empty()){
        char a = st.top();
        st.pop();
        char b = st.top();
        st.pop();
        if(a == b)count++;
        else count+=2;
    }
    return count;
}
int main(){
    string s = "}}{{{}}}}";

    int ans = countRev(s);
    cout<<ans<<endl;


    return 0;
}