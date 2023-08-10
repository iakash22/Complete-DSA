#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        Node *next;
        int data;

        Node(int data){
            this->data = data;
            next = NULL;
        }
};
class compare{
    public:
        bool operator()(Node *a,Node *b){
            return a->data > b->data;
        }
};
Node *mergeKLists(vector<Node *> lists){
    int k = lists.size();
    if(k == 0) return NULL;

    priority_queue<Node*, vector<Node *>, compare> minHeap;
    Node *head = NULL;
    Node *tail = NULL;

    for(int i=0; i<k; i++){
        if(lists[i] != NULL)
            minHeap.push(lists[i]);
    }

    while(!minHeap.empty()){
        Node *temp = minHeap.top();
        minHeap.pop();

        if(head == NULL){
            head = temp;
            tail = temp; 
        }
        else{
            tail->next = temp;
            tail = temp;
        }

        if(tail->next != NULL){
            minHeap.push(tail->next);
        }
    }
    return head;
} 
int main(){

    return 0;
}