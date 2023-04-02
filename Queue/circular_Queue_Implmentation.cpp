#include<iostream>
using namespace std;
class circular_queue{
    int rear;
    int front;
    int size;
    int *arr;
    public:
        circular_queue(int s){
            size = s;
            rear = -1;
            front = -1;
            arr = new int[size];
        }
        void push(int data){
            if((front == 0 && rear == size-1) || (front == (rear+1)%size)){
                cout<<"Queue is OverFlow"<<endl;
                return;
            }

            if(front == -1){
                front = rear = 0;
            }
            else if(front != 0 && rear == size-1){
                rear = 0;
            }
            else{
                rear++;
            }
            arr[rear] = data;
        }
        int pop(){
            if(front == -1){
                cout<<"Queue is UnderFlow"<<endl;
                return -1;
            }
            int ans = arr[front];
            if(front == size-1){
                front = 0;
            }
            else if(front == rear){
                front = rear = -1;
            }
            else{
                front++;
            }
            return ans;
        }
        int Rear(){
            if(empty()){
                return -1;
            }
            return arr[rear];
        }
        int Front(){
            if(empty()){
                return -1;
            }
            return arr[front];
        }
        bool empty(){
            return front == -1;
        }
        bool full(){
            return (front == 0 && rear == size-1) || (front == (rear+1)%size);
        }
};
int main(){
    circular_queue q(5);
    cout<<q.empty()<<endl;
    cout<<q.full()<<endl;
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(10);
    q.push(51);
    q.pop();
    cout<<q.Front()<<endl;
    cout<<q.Rear()<<endl;
    q.push(3);
    cout<<q.Front()<<endl;
    cout<<q.Rear()<<endl;
    q.push(3);
    // cout<<q.full()<<endl;
    return 0;
}