#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "Rahul";
    cout<<"Before string -> "<< str <<endl;
    stack<char> s;
    for(char ch : str){
        s.push(ch);
    }
    string newstr = "";
    while(!s.empty()){
        char ch = s.top();
        newstr.push_back(ch);
        s.pop();
    }

    cout<<"Reverse String -> "<< newstr <<endl;

    return 0;
}