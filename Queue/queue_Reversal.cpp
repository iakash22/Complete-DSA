#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// Time Complexity -> O(n)
// Space Complexity -> O(n)
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    return q;
}

// Time Complexity -> O(n)
// Space Complexity -> O(1)
// Recursion Approach
void solve(queue<int>& q){
    if(q.empty()) return;
    int value = q.front();
    q.pop();
    solve(q);
    q.push(value);
}
int main(){
    queue<int> q;

    return 0;
}
