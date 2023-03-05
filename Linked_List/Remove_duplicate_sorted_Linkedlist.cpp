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
void remove_Duplicate(Node* head){
    if(head == NULL || head->next == NULL) return;
    Node* curr = head;
    
    while(curr != NULL){      //curr->next != NULL
        if((curr->next != NULL) && curr->data != curr->next->data){
            curr = curr->next;
        }
        else{
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
    }
}
int main(){
    Node* head;

return 0;
}