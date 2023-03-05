#include<iostream>
#include<stack>
using namespace std;
void insertSortElement(stack<int>& st, int num){
    if(st.empty() || st.top() < num){
        st.push(num);
        return;
    }
    int element = st.top();
    st.pop();
    insertSortElement(st,num);
    st.push(element);
}
void sortStack(stack<int>& st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    sortStack(st);
    insertSortElement(st,num);
}
void print(stack<int>st){
    if(st.empty()){
        return;
    }
    cout<<st.top()<<endl;
    st.pop();
    print(st);
}
int main(){
    stack<int>st;
    st.push(5);
    st.push(55);
    st.push(-1);
    st.push(9);
    st.push(-7);
    print(st);
    sortStack(st);
    print(st);

    return 0;
}
