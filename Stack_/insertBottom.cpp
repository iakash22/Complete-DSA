#include<iostream>
#include<stack>
using namespace std;
void insertBottom(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int num = st.top();
    st.pop();
    insertBottom(st,x);
    st.push(num);
}
void pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> ans;
    while(!myStack.empty()){
        int val = myStack.top();
        ans.push(val);
        myStack.pop();
    }
    myStack.push(x);
    while(!ans.empty()){
        int val = ans.top();
        myStack.push(val);
        ans.pop();
    }
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
    st.push(75);
    st.push(85);
    st.push(95);
    int x = 55;
    insertBottom(st,x);
    print(st);

    return 0;
}