#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //Constructor --->>>>>
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor --->>>>
    ~Node(){
        int value = this->data;
        // Memory free 
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<" Memory is free for node with data " << value<<endl;
    }

};

// Insert at Start & Head
void insertAtHead(Node* &head,int data){
    // create new node
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Insert at End & Tail
void insertAtTail(Node* &tail,int data){
    // create new node
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// Insert in middle
// Insert any position at Linklist 
void insertAtPosition(Node* &tail,Node* &head,int position,int data){
    // insert at start position
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    // Creating an new Node
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Delete Any Node in Linklist
void deletionAtPosition(Node* &head,Node* &tail,int position){
    if(position == 1){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    Node* temp1 = NULL;
    Node* temp2 = head;
    int cnt = 1;
    while(cnt < position){
        temp1 = temp2;
        temp2 = temp2->next;
        cnt++;
    }

    if(temp2->next == NULL){
        tail = temp1;
    }
    temp1->next = temp2->next;
    temp2->next = NULL;
    delete temp2;
}
// Print and Traverse a linklist
void print(Node* &head){   // No reference its Works-->>
    Node* temp = head;     // Its Same as temp = head address
    while(temp != NULL){       // while(head != NULL){
        cout<<temp->data<<" "; // cout<<head->data<<" ";
        temp = temp->next;     // head = head->next;
    }
    cout<<endl;

}
int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    /*Insert at Head and Start in Linklist
    print(head);
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,30);
    print(head);   */

    /*Insert at Tail and End in Linklist */
    // print(head);
    // insertAtTail(tail,20);
    // print(head);
    // insertAtTail(tail,30);
    // print(head);
    // insertAtTail(tail,40);
    // print(head);

    // Insert at any position 
    // insertAtPosition(tail,head,5,15);
    // print(head);

    /*  //  Deletion in Linklist
    deletionAtPosition(head,tail,2);
    print(head);
    deletionAtPosition(head,tail,3);
    print(head);
    */

    cout<<head->data<<endl;
    cout<<tail->data<<endl;



return 0;
}