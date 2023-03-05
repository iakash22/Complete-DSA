#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&st, int count, int n){
    if(count == n/2){
        st.pop();
        return;
    }
    int element = st.top();
    st.pop();
    solve(st, count+1, n);
    st.push(element);
}
void deleteMiddle(stack<int>&st, int n){
    int count = 0;
    solve(st,count,n);
}
void print(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
    stack<int>st;
    st.push(25);
    st.push(45);
    st.push(55);
    st.push(65);
    st.push(75);
    int n = st.size();
    print(st);
    deleteMiddle(st, n);
    print(st);

    return 0;
}