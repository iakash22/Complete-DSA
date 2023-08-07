#include<iostream>
#include<queue>
using namespace std;
void print(queue<int> q){

    while(!q.empty()){
        cout<<q.front()<< " ";
        q.pop();
    }
}
void reverse( queue<int> &q){
    if(q.empty()){
        return ;
    }
    int val = q.front();
    q.pop();
    reverse(q);
    q.push(val);
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    print(q);
    cout<<endl;
    reverse(q);
    print(q);

    return 0;
}