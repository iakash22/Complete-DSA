#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};
void insertTail(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
// Time Complexity ->  O(n);
// Space Complexity -> O(n);
Node* cloneList1(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    
    Node* temp = head;
    while(temp != NULL){
        insertTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    unordered_map<Node*, Node*> mapping;
    Node* orginalNode = head;
    Node* cloneNode = cloneHead;
    
    while(orginalNode != NULL){
        mapping[orginalNode] = cloneNode;
        cloneNode = cloneNode->next;
        orginalNode = orginalNode->next;
    }

    orginalNode = head;
    cloneNode = cloneHead;

    while(orginalNode != NULL){
        cloneNode->random = mapping[orginalNode->random];
        orginalNode = orginalNode->next;
        cloneNode = cloneNode->next;
    }
    return cloneHead;
}


// Time Complexity ->  O(n);
// Space Complexity -> O(1);
Node* cloneList2(Node* head){
    // step : 1 -> create clone linked list 
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;
    while(temp != NULL){
        insertTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    // step : 2 -> Add Orginal list in clone list
    Node* orginalNode = head;
    Node* cloneNode = cloneHead;
    while(orginalNode != NULL && cloneNode != NULL){
        Node* next = orginalNode->next;
        orginalNode->next = cloneNode;
        orginalNode = next;

        next = cloneNode->next;
        cloneNode->next = orginalNode;
        cloneNode = next;
    }

    // step : 3 -> Add Clone list random 
    temp = head;
    while(temp != NULL){
        if(temp->next != NULL){
            // temp->next->random = temp->random ? temp->random->next : temp->random;
            if(temp->random != NULL){
                temp->next->random = temp->random->next;
            }
            else{
                temp->next = temp->random;  //  NULL
            }
        }
        temp = temp->next->next;
    }

    // step : 4 -> Revert step : 2 
    orginalNode = head;
    cloneNode = cloneHead;

    while(orginalNode != NULL && cloneNode != NULL){
        orginalNode->next = cloneNode->next;
        orginalNode = orginalNode->next;

        if(cloneNode->next != NULL){
            cloneNode->next = orginalNode->next;
            cloneNode = cloneNode->next;
        }
    }
    // step : 5 ->  return the answer;
    return cloneHead;
} 

int main(){
    Node* head = NULL;
return 0;
}