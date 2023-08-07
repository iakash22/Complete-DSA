#include <iostream>
#include <vector>
using namespace std;
long long int merge(long long arr[], vector<long long> &temp, int st, int ed)
{
    int mid = (st + ed) / 2;
    int i = st;
    int j = mid + 1;
    int k = st;
    long long int count = 0;
    while (i <= mid && j <= ed)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            count += mid - i + 1;
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= ed)
    {
        temp[k++] = arr[j++];
    }

    while (st <= ed)
    {
        arr[st] = temp[st];
        st++;
    }
    return count;
}
long long int solve(long long arr[], vector<long long> &temp, int st, int ed)
{
    if (st >= ed)
    {
        return 0;
    }
    long long int count = 0;
    int mid = (st + ed) / 2;

    count += solve(arr, temp, st, mid);
    count += solve(arr, temp, mid + 1, ed);
    count += merge(arr, temp, st, ed);

    return count;
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int count = 0;
    vector<long long> temp(N);
    count = solve(arr, temp, 0, N - 1);

    return count;
}
int main()
{
    vector<int> arr{8, 4, 2, 1};
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
