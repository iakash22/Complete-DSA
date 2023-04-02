#include<iostream>
using namespace std;
class kQueue{
    int *arr;
    int *rear;
    int *front;
    int *next;
    int s;
    int k;
    int freeSpot;
    public:
        kQueue(int s,int k){
            s = s;
            k = k;
            arr = new int[s];
            rear = new int[k];
            front = new int[k];
            for(int i=0; i<k; i++){
                rear[i] = -1;
                front[i] = -1;
            }
            next = new int[s];
            for(int i=0; i<s; i++){
                next[i] = i+1;
            }
            next[s-1] = -1;
            freeSpot = 0;
        }
        void enQueue(int data,int k){
            if(freeSpot == -1){
                cout<<"Queue is OverFlow"<<endl;
                return;
            }

            int index = freeSpot;
            freeSpot = next[index];
            if(front[k-1] == -1){
                front[k-1] = index;
            }
            else{
                next[rear[k-1]] = index;
            }
            next[index] = -1;
            rear[k-1] = index;
            arr[index] = data;
        }
        int deQueue(int k){
            if(front[k-1] == -1){
                cout<<"Queue is UnderFlow"<<endl;
                return -1;
            }
            int index = front[k-1];
            front[k-1] = next[index];
            next[index] = freeSpot;
            freeSpot = index;
            return arr[index];
        }
        int Front(int k){
            if(front[k-1] == -1){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            int index = front[k-1];
            return arr[index];
        }
};
int main(){
    kQueue q(6,2);
    q.enQueue(2,1);
    q.enQueue(3,1);
    q.enQueue(5,2);
    q.enQueue(45,2);
    q.enQueue(187,2);
    q.enQueue(19,1);
    cout<<q.deQueue(2)<<endl;
    cout<<q.deQueue(1)<<endl;
    cout<<q.deQueue(1)<<endl;
    cout<<q.deQueue(1)<<endl;
    cout<<q.deQueue(2)<<endl;
    cout<<q.Front(2)<<endl;



    return 0;
}