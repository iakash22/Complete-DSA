#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int val){
            this->data = val;
            this->next = NULL;
        }
};
class Queue{
    Node *front;
    Node *rear;
    public:
    Queue(){
        rear = NULL;
        front = NULL;
    }
    void enQueue(int val){
        Node *temp = new Node(val);
        if(temp == NULL){
            cout<<"Queue is OverFlow"<<endl;
            return;
        }
        if(front == NULL){
            front = temp;
            rear = temp;
        }
        else{
            rear->next = temp;
            rear = temp;
        }
    }
    int deQueue(){
        if(NULL == front){
            cout<<"Queue is UnderFlow"<<endl;
            return -1;
        }
        else{
            int ans = front->data;
            front = front->next;
            if(front == rear){
                front = NULL;
                rear = NULL;
            }
            return ans;
        }
    }
    bool isEmpty(){
        return rear == front;
    }
    int Front(){
        if(NULL == front) return -1;
        return front->data;
    }
};
class queue{
    int *arr;
    int rear;
    int front;
    int size;
    public:

        queue(int s){
            size = s;
            arr = new int[size];
            rear = 0;
            front = 0;
        }

        void push(int data){
            if(rear == size){
                cout<<"Queue is OverFlow "<<endl;
                return;
            }
            arr[rear] = data;
            rear++;
        }
        int pop(){
            if(rear == front){
                cout<<"Queue is UnderFlow"<<endl;
                return -1;
            }
            else{
                int ans = arr[front];
                arr[front] = -1;
                front++;
                if(front == rear){
                    front = rear = 0;
                }
                return ans;
            }
        }
        bool empty(){
            return rear == front;
        }
        int top(){
            if(rear == front) return -1;
            return arr[front];
        }
};
int main(){
    // Node *head;
    Queue q;
    q.enQueue(5);
    cout<<q.Front()<<endl;
    q.deQueue();
    q.enQueue(4);
    cout<<q.Front()<<endl;
    q.deQueue();
    q.enQueue(3);
    cout<<q.Front()<<endl;




    // queue q(5);
    // q.push(1);
    // cout<<q.top()<<endl;
    // q.pop();
    // q.push(4);
    // cout<<q.top()<<endl;
    // q.pop();
    // q.push(3);
    // cout<<q.top()<<endl;
    // q.pop();
    // q.push(2);
    // cout<<q.top()<<endl;
    // q.pop();
    // q.push(5);
    // cout<<q.top()<<endl;
    // q.pop();
    // if(q.empty()){
    //     cout<<"Queue is empty"<<endl;
    // }
    // else{
    //     cout<<"Queue is not empty"<<endl;
    // }
    // q.push(6);

    return 0;
}