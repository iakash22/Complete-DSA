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
Node* getMiddle(Node* head){
    Node* fast = head->next;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
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
bool isPlandrome2(Node* head){
    if(head->next == NULL){
        return true;
    }
    // Find Middle
    Node* middle = getMiddle(head);

    // reverse list after middle 
    Node* temp = middle->next;
    middle->next = reverse(temp);

    // Compare before middle and after middle reverse list 
    Node* head1 = head;
    Node* head2 = middle->next;
    while(middle != NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // reapeat reverse list to reverse
    temp = middle->next;           //   <<--- Optional
    middle->next = reverse(temp);
    
    return true;
}
bool isPlandrome1(Node* head){
    if(head->next == NULL) return true;
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL){
        int data = temp->data;
        arr.push_back(data);
        temp = temp->next;
    }
    int st = 0; int ed = arr.size() - 1;
    while(st<ed){
        if(arr[st] != arr[ed]) return false;
        else st++; ed--;
    }
    return true;
}
int main(){
    Node* head = NULL;

return 0;
}