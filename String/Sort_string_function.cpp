#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = "gvkcblkbkvcjhv";

    sort(str.begin(), str.end());
    cout<<str<<endl;
    string s ="366131616";

    sort(s.begin(), s.end(), greater<int>());
    cout<<s;
}