#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;

    vector<int> a(5,1);
    vector<int> last(a);
    cout<<"print a"<<endl;
    // a.erase(a.begin());
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of a "<<a.size()<<endl;
    cout<<"Capacity of a "<<a.capacity()<<endl;

    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    // capacity in vector to assign space for element 

    cout<<"Capacity-->>"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-->>"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-->>"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-->>"<<v.capacity()<<endl;

    // Size of vector 
    cout<<"Size-->>"<<v.size()<<endl;

    cout<<"element at 2nd Index"<<v.at(2)<<endl;

    cout<<"Front-->>"<<v.front()<<endl;
    cout<<"Back-->>"<<v.back()<<endl;

    cout<<"Before Pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after Pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before Clear Size "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear Size  "<<v.size()<<endl;


    return 0;
}