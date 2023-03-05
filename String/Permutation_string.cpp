#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int count2[26] = {0};
    int windowsize = s1.size();
    int i = 0;
    while (i < windowsize && i < s2.size())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (check(count1, count2))
    {
        return 1;
    }

    while (i < s2.size())
    {
        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;

        char oldchar = s2[i - windowsize];
        index = oldchar - 'a';
        count2[index]--;
        i++;
        
        if (check(count1, count2))
        {
            return 1;
        }
    }

    return 0;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << checkInclusion(s1, s2);

    return 0;
}