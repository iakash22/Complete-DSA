#include <bits/stdc++.h>
using namespace std;

/*   The set [1, 2, 3, ..., n]
contains a total of n! unique permutations.
Kth permutation Sequence   */
string getPermutation(int n, int k) {
        vector<int> ans;
        int fact = 1;
        for(int i=1; i<n; i++){
            ans.push_back(i);
            fact = fact*i;
        }
        ans.push_back(n);
        k = k - 1;
        string res = "";
        while(true){
            res = res + to_string(ans[k / fact]);
            ans.erase(ans.begin() + k / fact);
            if(ans.empty()){
                break;
            }
            k = k % fact;
            fact = fact / ans.size();
        }
        return res;
}
void permutation3(string str, string empty, int check[])
{
    if (empty.size() == str.size())
    {
        cout<<empty<<endl;
        return;
    }

    for (int i = 0; i < str.size(); i++)
    {
        // check element is picked and not
        if (!check[i])
        {
            // Marked true is element picked up
            check[i] = 1;
            empty.push_back(str[i]);
            permutation3(str, empty, check);

            // Backtrack
            //unmarked
            check[i] = 0;
            empty.pop_back();
        }
    }
}
void permutation1(string str, int index)
{
    if (str.size() == index)
    {
        cout << str << endl;
        return;
    }
    for (int i = 0; i <= index; i++)
    {
        swap(str[i], str[index]);
        permutation1(str, index + 1);
        swap(str[i], str[index]);
    }
}
void permutation2(string str, string empty)
{
    if (str.size() == 0)
    {
        cout << empty << endl;
        return;
    }

    char ch = str[0];
    for (int i = 0; i <= empty.size(); i++)
    {
        string f = empty.substr(0, i);
        string s = empty.substr(i, empty.size());
        permutation2(str.substr(1), f + ch + s);
    }
}
void duplicatePermutationSkip(string str, int index)
{
    if (index >= str.size())
    {
        cout << str << endl;
        return;
    }

    for (int i = index; i < str.size(); i++)
    {
        if (i != index && str[i] == str[index])
            continue;
        swap(str[i], str[index]);
        duplicatePermutationSkip(str, index + 1);
    }
}
void STL_Permutation(vector<int> &ans){
    sort(ans.begin(),ans.end());
    do{
        for(int i : ans){
            cout<<i;
        }cout<<endl;
    }while(next_permutation(ans.begin(),ans.end()));
}
int main()
{
    string str = "123";
    // permutation1(str, 0);
    cout << endl;
    // permutation2(str, "");
    cout << endl;
    // duplicatePermutationSkip(str, 0);
    int check[str.size()] = {0,0,0};
    // permutation3(str,"",check);

    vector<int> ans(3);
    for(int i=1; i<=ans.size(); i++){
        ans[i-1] = i;
    }
    STL_Permutation(ans);
    return 0;
}
// if(arr.size() == index){
//     ans.push_back(arr);
//     return ;
// }

// for(int i=0; i<arr.size(); i++){
//     swap(arr[i],arr[index]);
//     permutation(arrindex+1);
//     swap(arr[i],arr[index]);
// }