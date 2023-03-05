#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    char op;
    cout<<"Enter the numbers num1 and num2 : "<<endl;
    cin>>num1>>num2;
    cout<<"enter operation Operator:"<<endl;
    cin>>op;
    switch (op){
        case '+':
       cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<num1/num2;
        break;
        default :
        cout<<"enter valid operator :"; 
    }
    return 0;
}