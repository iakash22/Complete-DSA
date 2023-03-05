#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertTail(Node* &tail,Node* curr){
    tail->next = curr;
    tail = curr;
}
Node* sort_012S(Node* head){
    // Dummy Linked Node
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    Node* curr = head;

    // Insert in dummy Node
    while(curr != NULL){
        int value = curr->data;
        if(value == 0){
            insertTail(zeroTail,curr);
        }
        else if(value == 1){
            insertTail(oneTail,curr);
        }
        else{
            insertTail(twoTail,curr);
        }
        curr = curr->next;
    }

    // Merge 
    if(oneHead. != NULL){
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    twoTail->next = NULL;

    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return head;
}
Node* sort_012(Node* head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0) zeroCount++;
        else if(temp->data == 1) oneCount++;
        else twoCount++;
        temp = temp->next;
    }
    temp = head;
    while(temp !=NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else{
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}
int main(){
    Node* head = NULL;


return 0;
}