#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void reverseStack1(stack<int>&st){
    vector<int> ans;
    while(!st.empty()){
        int num = st.top();
        ans.push_back(num);
        st.pop();
    }
    for(int i=0; i<ans.size(); i++){
        int num = ans[i];
        st.push(num);
    }
}
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
void reverseStack2(stack<int>&st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    reverseStack2(st);
    insertBottom(st,num);
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
    cout<<"Before Reverse Stack -> \n";
    print(st);
    // reverseStack1(st);
    reverseStack2(st);
    cout<<"After Reverse Stack -> \n";
    print(st);

    return 0;
}