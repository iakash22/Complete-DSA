#include <bits/stdc++.h>
using namespace std;
int kedane(int arr[], int n)
{
    int maxsum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxsum = max(sum, maxsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapsum;
    int nowrapsum = kedane(arr, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kedane(arr, n);

    cout << max(wrapsum, nowrapsum) << endl;

    return 0;
}