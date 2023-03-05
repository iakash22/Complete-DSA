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
// Given data remove in unsorted Linklist
Node* removeElements(Node* head, int data) {
        if(head == NULL) return head;
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL){
            if((curr->next != NULL) && curr->next->data == data){   //  curr->data == data
                Node* temp2 = curr->next;                           //  Node* temp2 = prev->next;
                curr->next = curr->next->next;                      //  prev->next = curr->next;
                delete(temp2);                                      //  delete(temp2);
            }
            else{
                // prev = curr;
                curr = curr->next;
            }
        }
        if(head->data == data) head = head->next;    // Not keeping
        return head;
}
// Time complexity -> O(n^2)
// Space Copmlexity -> O(1);
Node* removeDuplicates(Node* head){
    if(head == NULL) return head;
    Node* curr = head;
    while(curr != NULL){
        Node* temp2 = curr;
        while(temp2->next != NULL){
            if(curr->data == temp2->next->data){
                Node* temp2Next = temp2->next;
                temp2->next = temp2->next->next;
                delete temp2Next;
            }
            else{
                temp2 = temp2->next;
            }
        }
        curr = curr->next;
    }
    return head;
}
// Time complexity -> O(n)
// Space Copmlexity -> O(n);
Node* removeDuplicateUsingMAP(Node* head){
    if(head == NULL) return head;
    unordered_map<int, bool > visited;
    Node* temp1 = NULL;
    Node* temp2 = head;
    while(temp2 != NULL){
        if(visited[temp2->data] == true){
            Node* temp2Next = temp1->next;
            temp1->next = temp2->next;
            delete tempNext;
        }

        visited[temp2->data] = true;
        temp1 = temp2;
        temp2 = temp2->next;
    }
    return head;
}
// Time complexity -> O(nlogn)
// Space Copmlexity -> O(1);
// -->> First Sort Linked list 
// ->> Second remove duplicate sorted Linkedlist

int main(){
    Node* head = NULL;

return 0;
}