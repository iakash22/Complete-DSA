#include<iostream>
using namespace std;
class stack{
    private:
        int top1;
        int top2;
        int *arr;
        int size;
    public:
        stack(int size){
            this->size = size;
            arr = new int[size];
            top1 = -1;
            top2 = size;
        }
        void push1(int data){
            if(top2 - top1 == 1){
                cout<<" stack Overflow!!"<<endl;
                // return;
            }
            else{
                // cout<<"In"<<endl;
                top1++;
                arr[top1] = data;
            }
        }

        void push2(int data){
            if(top2 - top1 == 1){
                cout<<" stack Overflow!!"<<endl;
                // return;
            }
            else{
                top2--;
                arr[top2] = data;
            }
        }

        void pop1(){
            if(top1 == -1){
                cout<<"stack underflow!!"<<endl;
                return;
            }
            else{
                top1--;
            }
        }

        void pop2(){
            if(top2 == size){
                cout<<"stack underflow!!"<<endl;
                return;
            }
            else{
                top2++;
            }
        }

        int len1(){
            return top1+1;
        }
        int len2(){
            return size - top2;
        }

        bool empty1(){
            return top1 == -1;
        }

        bool empty2(){
            return top2 == size;
        }
        
        int peek1(){
            return empty1() ? -1 : arr[top1];
        }

        int peek2(){
            return empty2() ? -1 : arr[top2];
        }
};
int main(){
    stack st(5);
    st.push1(1);
    st.push1(3);
    st.push1(4);
    st.push1(6);
    st.pop1();
    st.push2(2);
    st.push2(5);
    cout<<st.peek1()<<endl;
    cout<<st.peek2()<<endl;
    cout<<"len stack1 : "<<st.len1()<<endl;
    cout<<"len stack2 : "<<st.len2()<<endl;
}