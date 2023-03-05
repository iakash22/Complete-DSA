#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next =  NULL;
    }
};
// Genric Code and Optimize Loop
Node* addNumbers2(Node* first, Node* second){
    int carry = 0;
    Node* head = NULL;
    Node* tail = NULL;
    while(first != NULL || second != NULL || carry != 0){
        int val1 = 0;
        if(first != NULL){
            val1 = first->data;
        }

        int val2 = 0;
        if(second != NULL){
            val2 = second->data;
        }
        // Sum Node data
        int sum = carry + val1 + val2;

        // last digit of sum
        int digit = sum%10;
        // insert in list 
        insertAtTail(head, tail, digit);

        // find carry
        carry = sum/10;

        // Update first and second Node
        if(first != NULL){
            first = first->next;
        }
        if(second != NULL){
            second = second->next;
        }
    }
    return head;
}




// Time Complexity -> O(n+m);
// Space Complexity -> O(max(m,n));

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* Next = NULL;

    while(curr != NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr; 
        curr = Next;
    }
    return prev;
}
void insertAtTail(Node* &head, Node* &tail, int data){
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
Node* addNumbers(Node* first, Node* second){
    int carry = 0;
    Node* head = NULL;
    Node* tail = NULL;
    while(first != NULL && second != NULL){
        // Sum Node data
        int sum = first->data + second->data + carry;

        // last digit of sum
        int digit = sum%10;
        // insert in list 
        insertAtTail(head, tail, digit);

        // find carry
        carry = sum/10;

        // Update first and second Node
        first = first->next;
        second = second->next;
    }
    
    // 
    while(first != NULL){
        int sum = first->data + carry;
        int digit = sum%10;
        insertAtTail(head, tail, digit);
        carry = sum/10;

        first = first->next;
    }

    //
    while(second != NULL){
        int sum = second->data + carry;
        int digit = sum%10;
        insertAtTail(head, tail, digit);
        carry = sum/10;

        second = second->next;
    }

    // 
    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        insertAtTail(head, tail, digit);
        carry = sum/10;
    }

    return head;
}
Node* addTwoNumber(Node* first, Node* second){
    // First reverse lists 
    first = reverse(first);
    second = reverse(second);

    // second add reverse list data 
    Node* ansHead = addNumbers(first, second);

    // third reverse ansHead list 
    ansHead = reverse(ansHead);
    
    return ansHead;
}
int main(){
    Node* head = NULL;

return 0;
}