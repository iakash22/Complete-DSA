#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}
void reverse(queue<int>&q,int k){
    stack<int> st;
    for(int i=0; i<k&&!q.empty(); i++){
        int val = q.front();
        st.push(val);
        q.pop();
    }
    while(!st.empty()){
        int val = st.top();
        q.push(val);
        st.pop();
    }
    for(int i=0; i<q.size()-k; i++){
        int val = q.front();
        q.push(val);
        q.pop();
    }
}
int main(){
    queue<int> q;
    for(int i=0; i<5; i++){
        q.push(i);
    }
    print(q);
    reverse(q,3);
    print(q);
    
    return 0;
}
