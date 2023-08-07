#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node *bottom;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->bottom = NULL;
    }
};
Node *merge(Node *a,Node *b){
    if(a == NULL) return b;
    if(b == NULL) return a;

    Node *ans = NULL;
    if(a->data <= b->data){
        ans = a;
        a->bottom = merge(a->bottom,b);
    }
    else{
        ans = b;
        b->bottom = merge(a,b->bottom);
    }
    return ans;
}

Node *flatten(Node *head){
    if(head == NULL) return head;
    Node *mergeList = merge(head, flatten(head->next));
    return mergeList;
}
int main(){


    return 0;
}