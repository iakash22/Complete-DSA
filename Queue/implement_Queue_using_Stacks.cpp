#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(!s2.empty()){
            int x = s2.top();
            s2.pop();
            return x;
        }
        else{
            if( s1.empty()){
                return -1;
            }
            else{
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                int x = s2.top();
                s2.pop();
                return x;
            }
        }
    }
    
    int peek() {
        if(!s2.empty()){
            int x = s2.top();
            return x;
        }
        else{
            if( s1.empty()){
                return -1;
            }
            else{
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                int x = s2.top();
                return x;
            }
        }
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main(){
    MyQueue q;
    q.push(5);


    return 0;
}