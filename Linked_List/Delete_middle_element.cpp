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
Node* deleteMiddleNode2(Node* head){
    if(head == NULL) return head;
    Node* slow = head;
    Node* fast = head->next->next;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return head;
}
Node* deleteMiddleNode1(Node* head){
    if(head == NULL) return head;
    int cnt = 0;
    Node* temp = head;
    while(temp != head){
        temp = temp->next;
        cnt++;
    }
    int len = cnt/2;
    temp = head;
    cnt = 0;
    while(cnt < len-1){
        temp =temp->next;
        cnt++;
    }
    temp->next = temp->next->next;
    return head;
}
int main(){
    Node* head = NULL;

return 0;
}