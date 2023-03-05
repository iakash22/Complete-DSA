#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char isVowel(char &ch){
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
    ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O'
    || ch == 'U');
}
string revsreVowel(string &s){
    vector<char> vowel;
    for(char ch : s){
        if(isVowel(ch)){
            vowel.push_back(ch);
        }
        else{
            continue;
        }
    }
    reverse(vowel.begin(),vowel.end());
    int j = 0;
    for(int i=0; i<s.size(); i++){
        if(isVowel(s[i])){
            s[i] = vowel[j++];
        }
    }
    return s;
}
int main(){
    string s = "Apple";
    cout<<revsreVowel(s);

    return 0;
}