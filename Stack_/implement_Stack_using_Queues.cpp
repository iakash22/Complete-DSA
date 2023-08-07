#include<iostream>
#include<queue>
using namespace std;

// Using Single Queue 

class MyStack {
    int *arr;
    int size;
    int t;
public:
    queue<int> q;
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
        for(int i=0; i<q.size()-1; i++){
            int val = q.front();
            q.pop();
            q.push(val);
        }
    }
    
    int pop() {
        int ans = -1;
        if(q.empty()) return ans;
        else{
            ans = q.front();
            q.pop();
        }
        return ans;
    }
    
    int top() {
        int ans = -1;
        if(q.empty()) return ans;
        else{
            ans = q.front();
        }
        return ans;
    }
    
    bool empty() {
        return q.empty();
    }
};

// Using Double Queue 

class MyStack2 {
    int *arr;
    int size;
    int t;
public:
    queue<int> q;
    queue<int> qtemp;
    MyStack2() {
    }
    
    void push(int x) {
        qtemp.push(x);
        while(!q.empty()){
            qtemp.push(q.front());
            q.pop();
        }

        while(!qtemp.empty()){
            q.push(qtemp.front());
            qtemp.pop();
        }
    }
    
    int pop() {
        int ans = -1;
        if(q.empty()) return ans;
        else{
            ans = q.front();
            q.pop();
        }
        return ans;
    }
    
    int top() {
        int ans = -1;
        if(q.empty()) return ans;
        else{
            ans = q.front();
        }
        return ans;
    }
    
    bool empty() {
        return q.empty();
    }
};
int main(){
    MyStack st;
    st.push(10);


    return 0;
}