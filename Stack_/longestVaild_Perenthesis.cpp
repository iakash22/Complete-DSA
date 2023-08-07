#include<iostream>
#include<stack>
using namespace std;

int longestValidParenthesis(string &str){
    int maxlen = 0;
    stack<int> st;
    st.push(-1);
    for(int i=0; i<str.size(); i++){
        if(str[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            else{
                int len = i - st.top();
                maxlen = max(maxlen,len);
            }
        }
    }
    return maxlen;
}
int main(){

    string str = "(())";

    int len = longestValidParenthesis(str);
    cout<<len<<endl;


    return 0;
}