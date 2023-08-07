#include<queue>
#include<iostream>
using namespace std;
void print(queue<int> q){

    while(!q.empty()){
        cout<<q.front()<< " ";
        q.pop();
    }
}
void interleaveQueue(queue<int> &q){
    int n = q.size();
    queue<int>tempQ;
    int k = n/2;
    while(k--){
        tempQ.push(q.front());
        q.pop();
    }

    while(!q.empty() && !tempQ.empty()){
        int val = tempQ.front();
        q.push(val);
        tempQ.pop();

        val = q.front();
        q.push(val);
        q.pop();
    }
    if(n%2 == 1){
        int val = q.front();
        q.push(val);
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    interleaveQueue(q);
    print(q);

    return 0;
}