#include<bits/stdc++.h>
using namespace std;
bool isValidRecursion(string s) {
    if(s.size() == 0) return true;
    int found = s.find("abc");
    while(found != string::npos){
        string tLeft = s.substr(0, found);
        string tRight = s.substr(found+3, s.size());
        
        return isValidRecursion(tLeft+tRight);
    }
    return false;
}
bool isValid(string s) {
    if(s[0] != 'a') return false;

    stack<char> st;
    for(auto val : s){
        if(val == 'a'){
            st.push(val);
        }
        else if(val == 'b'){
            if(!st.empty() && st.top() == 'a'){
                st.push(val);
            }
            else{
                return false;
            }
        }
        else if(val == 'c'){
            if(!st.empty() && st.top() == 'b'){
                st.pop();
                if(!st.empty() && st.top() == 'a'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    return st.empty() ? true : false;
}
int main(){



    return 0;
}