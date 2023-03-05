#include<bits/stdc++.h>
using namespace std;
bool reverseNumber1(int n){
    if(n < 0) return false;
    int x = n;
    int rev = 0;
    while(x){
        int lastdgt = x%10;
        if(rev < INT_MIN/10 || rev > INT_MAX/10) return false;
        rev = rev*10 + lastdgt;
        x /= 10;
    }
    return rev == n;
}
bool reverseNumber2(int n){
    if(n < 0) return false;
    string str = to_string(n);
    // cout<<str;
    int i=0; int j = str.size()-1;
    while(i<=j){
        if(str[i] != str[j]) return false;
        else {
            i++;
            j--;
        }
    }
    return true;
}
bool reverseNumber3(int n){
    if(n < 0) return false;
    stack<int> st;
    int x = n;
    while(x){
        int lastDgt = x%10;
        st.push(lastDgt);
        x /= 10;
    }
    while(n){
        int lastDgt = n%10;
        if(st.top() != lastDgt) return false;
        st.pop();
        n /= 10;
    }
    return true;
}
int main(){
    int n = 2552;
    cout<<reverseNumber1(n)<<endl;
    cout<<reverseNumber2(n)<<endl;
    cout<<reverseNumber3(n)<<endl;

    return 0;
}