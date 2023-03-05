#include <bits/stdc++.h>
using namespace std;
bool valid(char ch)
{
    if ((ch >= 'a' && 'z' >= ch) || (ch >= 'A' && 'Z' >= ch) || (ch >= '0' && '9' >= ch))
    {
        return true;
    }
    return false;
}
char tolowercase(char ch)
{
    if ((ch >= 'a' && 'z' >= ch) || (ch >= '0' && '9' >= ch))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool check(string s)
{
    int st = 0;
    int ed = s.length() - 1;
    while (st <= ed)
    {
        if (s[st] != s[ed])
        {
            return false;
        }
        else
        {
            st++;
            ed--;
        }
    }
    return true;
}
bool isPalindrome(string s)
{
    string temp = "";

    // remove all non-alphanumeric characters
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    // convert Lower case
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = tolowercase(temp[i]);
    }

    // check Palindrome
    return check(temp);
}

// only chaeck->>>>>>>

char lowercase(char ch)
{
    if (ch >= 'a' && 'z' >= ch)
    {
        return ch;
    }
    else
    {
        char ans = ch - 'A' + 'a';
        return ans;
    }
}
bool Palindrome(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (lowercase(arr[s]) != lowercase(arr[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
int main()
{
    // check Palindrome
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    cout << Palindrome(arr, n);

    // bool check=1;

    // for(int i=0; i<n; i++){

    //     if(arr[i] != arr[n-1-i]){
    //         check=0;
    //         break;
    //     }
    // }
    // if(check==true){
    //     cout<<"Array is palindrome!!!..."<<endl;
    // }
    // else{
    //     cout<<"Array is not palindrome???..."<<endl;
    // }

    return 0;
}