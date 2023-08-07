#include<bits/stdc++.h>
using namespace std;
string decodeString(string s){
    if(s.empty() ){
        return "";
    }

    stack<string> st;
    for(auto ch : s){
        if(ch == ']'){
            string charString = "";
            while(!st.empty() && st.top() != "["){
                charString += st.top();
                st.pop();
            }
            st.pop();
            string numericString = "";
            while(!st.empty() && isdigit(st.top()[0])){
                numericString += st.top();
                st.pop();
            }
            reverse(numericString.begin(), numericString.end());
            int n = stoi(numericString);

            string decodeString = "";
            while(n--){
                decodeString += charString;
            }
            st.push(decodeString);
        }
        else{
            string temp(1, ch);
            st.push(temp);
        }
    }
    string ans = "";
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    string str = "3[5[oozz]abc]";
    string ans = decodeString(str);
    cout<<ans<<endl;

    return 0;
}