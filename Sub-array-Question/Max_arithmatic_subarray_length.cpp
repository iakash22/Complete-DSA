#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int pd = a[1] = a[0];
    int j = 0;
    int curr = 0;
    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 0;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}