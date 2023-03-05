#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int *p = &i;
    int **ptr = &p;

    cout<<"i address "<< &i<<endl;
    cout<<"i address "<< p<<endl;
    cout<<"i address "<< *ptr<<endl;

    cout<<endl<<endl;

    cout<<"p address "<< &p<<endl;
    cout<<"p address "<< ptr<<endl; 

    cout<<endl<<endl;

    cout<<"i value "<< i<<endl;
    cout<<"i value "<< *p<<endl;
    cout<<"i value "<< **ptr<<endl; //value  in *p

    cout<<endl<<endl;

    cout<<"ptr address "<< &ptr<<endl;
}