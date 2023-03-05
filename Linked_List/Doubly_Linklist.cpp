#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            delete prev;
            this->next = NULL;
            this->prev = NULL;
        }
        cout<<"Memory is free for node with data -> " << value<<endl;
    }

};

// insert At Head
void insertAtHead(Node* &head,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
    }
    else{
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}
// Insert At tail
void insertAtTail(Node* &tail,int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}
//  Print and Traverse Linklist
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// Insert At any Position 
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    int cnt = 1;
    Node* temp = head;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}
// Deletion any Position Of node
void Deletion(Node* &head,Node* &tail,int position){
    if(position == 1){
        Node* temp = head;
        head = head->next; // temp->next;
        temp->next->prev = NULL; // head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        tail = temp->prev; // tail->prev;
        temp->prev->next = temp->next; // tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    temp->prev = NULL;
    temp->next = NULL;
    delete temp;
}
// Get length of Linklist 
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    // print(head);
    // cout<<getLength(head)<<endl;

    // Insert at Head
    // insertAtHead(head,9);
    // print(head);
    // insertAtHead(head,7);
    // print(head);
    // insertAtHead(head,5);
    // print(head);

    // Insert At Tail
    insertAtTail(tail,15);
    // print(head);
    insertAtTail(tail,17);
    // print(head);
    insertAtTail(tail,19);
    print(head);

    insertAtPosition(head,tail,20,2);
    print(head);
    Deletion(head,tail,3);
    print(head);
    // cout<<tail->data<<endl;
    // cout<<head->data<<endl;

return 0;
}