#include <bits/stdc++.h>
using namespace std;
// Using Binary Search 
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int st = 0;
        int ed = row*col - 1;

        while(st<=ed){
            int mid = st + (ed - st)/2;
            if(matrix[mid/col][mid%col] == target){
                return true;
            }
            else if(matrix[mid/col][mid%col] < target){
                st = mid+1;
            }
            else if(matrix[mid/col][mid%col] > target){
                ed = mid-1;
            }
        }
        return false;
    }
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    int r = 0, c = m - 1;
    int target;
    cin >> target;
    bool found = false;

    // Using Two Pointer 
    while (r < n && c >= 0)
    {
        if (arr[r][c] == target)
        {
            cout <<"Row no:: " <<r <<"\t Column no:: "<< c <<endl;
            found = true;
        }
        if (arr[r][c] < target)
        {
            r++;
        }
        else
        {
            c--;
        }
    }

    if (found)
    {
        cout << "Target Element Founded!!!.." << endl;
    }
    else
    {
        cout << "Target Element does not exit in Matrix???..." << endl;
    }

    return 0;
}