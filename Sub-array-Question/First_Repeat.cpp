/*Given an array[]of size N. The is find the first element in the array of integers, i.e, an element that
occurs more than once and whose index of first occurence is smallest

>>>constraints
1 <= N <= 10^6
0 <= Ai <= 10^6
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 16;
    int indx[N];
    for (int i = 0; i < N; i++)
    {
        indx[i] = -1;
    }

    int minindx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (indx[arr[i]] != -1)
        {
            minindx = min(minindx, indx[arr[i]]);
        }
        else
        {
            indx[arr[i]] = i;
        }
    }
    if (minindx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minindx + 1 << endl;
    }
    return 0;
}