#include<iostream>
using namespace std;
int main()
{
    char button;
    for(int i=1;i<=2;i++){
    cout<<"enter the button :"<<endl;
    cin>>button;
    switch (button)
    {
        case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
        cout<<"Namste"<<endl;
        break;
        case 'c':
        cout<<"caio"<<endl;
        break;
        case 'd':
        cout<<"salut"<<endl;
        break;
        case 'e':
        cout<<"Witam"<<endl;
        break;
        case 'f':
        cout<<"merhaba"<<endl;
        break;
        default : 
        cout<<"enter another button :"<<endl;
     }

    } 
     return 0;


}