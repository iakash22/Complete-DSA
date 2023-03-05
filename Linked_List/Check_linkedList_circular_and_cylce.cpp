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
bool Check_list_Cicular(Node* head){
    if(head == NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    Node* temp = head;
    map<Node*, bool> visited;
    while(temp != NULL){
        if(visited[temp] == true) return true;
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
// Floyd's cycle detection Algorithm (it is also called Hare-Tortoise algorithm)
bool folydCycleDetection(Node* head){
    if(head == NULL) return false;
    Node* slow = head;
    Node* fast = head;
    
    while(slow != NULL && fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast) return true;
    }
    return false;
}
Node* getCycleStartingNode(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast) break;
    }

    if(slow != fast) return NULL;
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
void reomveCycle(Node* head){
    if(head == NULL){
        return
    }
    Node* startPoint = getCycleStartingNode(head);
    if(startPoint == NULL) return;
    Node* temp = startPoint;
    while(startPoint != temp->next){
        temp = temp->next;
    }
    temp->next = NULL;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    insertNode(head, 20,10);
    insertNode(head, 30,10);
    if(Check_list_Cicular(head)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}