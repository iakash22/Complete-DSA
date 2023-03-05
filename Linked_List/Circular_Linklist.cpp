#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<" Memory is free for node with data "<<value<<endl;
    }
};
// Insert Node
void insertNode(Node* &tail,int data,int element){
    // Empty List
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;  // tail
    }
    else{
        // Non-empty List
        // Assuming that the element is present in the list
        Node* curr = tail;
        while(element != curr->data){
            curr = curr->next;
        }

        // Element found -> curr is representing element node
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void deletion(Node* &tail,int element){
    // empty list
    if(tail == NULL){
        cout<<"List is empty, Please check again !!!"<<endl;
        return;
    }
    // non-empty list
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data != element){
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    // only one Node in list ->>>
    if(curr == prev){
        tail = NULL;
    }

    // only 2 node in list
    else if(curr == tail){
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
}
void print(Node* tail){
    Node* temp = tail;
    // Empty list
    if(tail == NULL){
        cout<<"List is Empty!!!";
    }
    else{
        do
        {
            cout<<tail->data<<" ";
            tail = tail->next;
        } while (tail != temp);
    }
    cout<<endl;
}
int main(){
    Node* tail = NULL;
    // insertNode(tail,10,0);
    // print(tail);
    // insertNode(tail,20,10);
    // print(tail);
    // insertNode(tail,30,20);
    // print(tail);
    // insertNode(tail,40,30);
    // print(tail);

    // insertNode(tail,25,20);
    // print(tail);
    // cout<<tail->data;

    // deletion(tail, 20);
    // print(tail);
    // cout<<
return 0;
}