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
Node* K_Group_Reverse(Node* head,int k){
    // case : 1 Base case 
    if(head == NULL){
        return head;
    }

    // case : 2 Reverse first K group nodes of list 
    int cnt = 1;
    Node* prev = NULL;
    Node* curr = head;
    Node* nextPart = NULL;
    while(curr != NULL && cnt <= 2){
        nextPart = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPart;
        cnt++;
    }

    // cass : 3 reverse next part of list by recursion
    if(nextPart != NULL){
        head->next = K_Group_Reverse(nextPart,k);
    }
    // case : 4 returned head of reversed list
    return prev;
}

int main(){
    Node* head = NULL;

return 0;
}