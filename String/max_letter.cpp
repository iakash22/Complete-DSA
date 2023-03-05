#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "asdfghjklasdfaghgfd";
    int fre[26];
    for(int i=0; i<26; i++){
        fre[i] = 0;
    }

    for(int i=0; i<str.size(); i++){
        fre[str[i] - 'a']++;
    }

    char ans = 'a';
    int mx = -1;
    for(int i=0; i<26; i++){
        if(fre[i] > mx){
            mx = fre[i];
            ans = i+'a';
        }
    }
    cout<<mx<<"  "<<ans;

    return 0;
}