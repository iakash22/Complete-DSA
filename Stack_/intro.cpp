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
class Stack{
    public:
        Node* top;

        Stack(){
            this->top = NULL;
        }

        void pushLink(int data){
            Node* temp = new Node(data);
            if(temp == NULL){
                cout<<"Stack OverFlow!!"<<endl;
                return ;
            }
            temp->data = data;
            temp->next = top;
            top = temp;
        }
        void popLink(){
            if(top == NULL){
                cout<<"Stack UnderFlow!!"<<endl;
                return;
            }
            Node* temp;
            temp = top;
            top = top->next;
            free(temp);
        }
        int peekLink(){
            if(top == NULL){
                cout<<"Stack is Empty!"<<endl;
                return -1;
            }
            return top->data;
        }
        bool isEmptyLink(){
            return top == NULL;
        }
};
class Stack{
    public:
        int size;
        int *arr;
        int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            // cout<<arr[top]<<endl;
            return arr[top];
        }
        else{
            cout<<"stack is empty!!"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            // cout<<"stack is empty!!"<<endl;
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Stack st(5);

    st.push(15);
    st.push(19);
    st.push(84);
    st.push(545);
    st.push(75);
    // st.push(95);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    // st.pop();

    if(st.isEmpty()){
        cout<<"stack khali pda h!!"<<endl;
    }
    else{
        cout<<"stack mai kuch toh pda h"<<endl;
    }
    cout<<sizeof(Stack);


    // creation of stack in STL
    // stack<int> s;

    // // Insert in stack
    // s.push(2);
    // s.push(9);

    // // Delete or remove element in stack
    // s.pop();

    // cout<<"Print stack element -> "<<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"stack is empty!!"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty!!!"<<endl;
    // }

    // cout<<"Size of stack -> "<<s.size()<<endl;


    return 0;
}