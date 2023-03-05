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
Node<int>* solve(Node<int>* first, Node<int>* second){
    if(first->next == NULL){
        first->next = second;
        return first;
    }

    Node<int>* curr1 = first;
    Node<int>* next1 = first->next;
    Node<int>* curr2 = second;
    Node<int>* next2 = second->next;

    while(next1 != NULL && curr2 != NULL){
            if(curr1->data <= curr2->data && next1->data >= curr2->data){
                // add node in first list
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;

                // Update Pointer
                curr1 = curr2;
                curr2 = next2;
            }
            else{
                curr1 = next1;
                next1 = next1->next;
                if(next1 == NULL){
                    curr1->next = curr2;
                    return first;
                }
            }
        }
    return first;
}
Node<int>* mergeSortTowLists(Node<int>* first, Node<int>* second){
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }

    if(first->data > second->data){
        return solve(second, first);
    }
    else{
        return solve(first, second);
    }
}
int main(){
    Node* head = NULL;

return 0;
}