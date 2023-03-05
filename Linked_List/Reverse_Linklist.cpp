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
void insertAtHead(Node* &head,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
    }
    Node* temp = new Node(data);   
    temp->next = head;
    head = temp;
}
void print(Node* &head){
    if(head == NULL){
        cout<<"Linklist is empty!!!";
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}
// Recursive solution ->>
void solve(Node* &head,Node* prev,Node* curr){
    if(curr == NULl){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    solve(head,curr,forward);
    curr->next = prev;
}
void solve1(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* tempHead = solve1(head->next);
    head->next->next = head;
    head->next = NULL;
    return tempHead;
}
Node* reverse(Node* &head){
    // Itrative solution -->> 
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        cout<<prev->data<<" ";
    }
    cout<<endl;
    return prev;
}
int main(){
    Node* head = NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    print(head);
    head = reverse(head);
    print(head);
    // cout<<head->data<<endl;
    // cout<<head->next->data<<endl;

return 0;
}