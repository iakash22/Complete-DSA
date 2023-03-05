#include<bits/stdc++.h>
using namespace std;
int Compression(vector<char> chars){
    int i = 0;
    int idxans = 0;
    int n = chars.size();
    while(i<n){
        int j = i+1;

        while(j<n && chars[i] == chars[j]){
            j++;
        }

        chars[idxans++] = chars[i];

        int count = j-i;
        if(count > 1){
            string cnt = to_string(count);
            while(char ch: cnt){
                chars[idxans++] = ch;
            }
        }
        i = j;
    }
    return idxans;
}
int main(){
    vector<char> ch;


    return 0;
}