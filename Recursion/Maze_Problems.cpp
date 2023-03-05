#include <bits/stdc++.h>
using namespace std;
class Maze_Problems
{
public:
    int count(int r, int c)
    {
        // count Possible path to reach destination
        if (r == 1 || c == 1)
        {
            return 1;
        }
        int down = count(r - 1, c);
        int right = count(r, c - 1);

        return down + right;
    }

    void PrintDirection(string empty1, int r, int c)
    {
        // D == Down && R == Right
        // print Possible path to reach destination
        if (r == 1 && c == 1)
        {
            cout << empty1 << endl;
            return;
        }

        if (r > 1)
        {
            PrintDirection(empty1 + 'D', r - 1, c);
        }
        if (c > 1)
        {
            PrintDirection(empty1 + 'R', r, c - 1);
        }
    }

    void Hrzntl_Vrticl_Dignl(string empty2, int r, int c)
    {
        if (r == 1 && c == 1)
        {
            cout << empty2 << endl;
            return;
        }

        // Digonal
        if (r > 1 && c > 1)
        {
            Hrzntl_Vrticl_Dignl(empty2 + 'D', r - 1, c - 1);
        }

        // Horizontal
        if (r > 1)
        {
            Hrzntl_Vrticl_Dignl(empty2 + 'H', r - 1, c);
        }

        // Vertical
        if (c > 1)
        {
            Hrzntl_Vrticl_Dignl(empty2 + 'V', r, c - 1);
        }
    }

    void Path_restrictions(string empty3, bool maz[][3], int r, int c, int n)
    {
        if (r == n - 1 && c == n - 1)
        {
            cout << empty3 << endl;
            return;
        }

        // Check Restriction in array
        if (!maz[r][c])
        {
            return;
        }

        // Down
        if (r < n - 1)
        {
            Path_restrictions(empty3 + 'D', maz, r + 1, c, n);
        }

        // Right
        if (c < n - 1)
        {
            Path_restrictions(empty3 + 'R', maz, r, c + 1, n);
        }
    }

    void All_Paths(string empty3, bool maz[][3], int r, int c, int n)
    {
        if (r == n - 1 && c == n - 1)
        {
            cout << empty3 << endl;
            return;
        }

        // Check Restriction in array
        if (!maz[r][c])
        {
            return;
        }

        maz[r][c] = false;
        // Down
        if (r < n - 1)
        {
            All_Paths(empty3 + 'D', maz, r + 1, c, n);
        }

        // Right
        if (c < n - 1)
        {
            All_Paths(empty3 + 'R', maz, r, c + 1, n);
        }

        // Left
        if(c > 0){
            All_Paths(empty3 + 'L', maz, r, c-1, n);
        }

        //Up
        if(r > 0){
            All_Paths(empty3 + 'U', maz, r-1, c, n);
        }

        // Backtrack

        // this line is where the function will be over
        // so before the function gets removed, also remove the changes that were made by that function 
        maz[r][c] = true;

    }
    void all_pathPrint(string empty3, bool maz[][3], int r, int c, int n, int path[][3], int step)
    {
        if (r == n - 1 && c == n - 1)
        {
            path[r][c] = step;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<path[i][j]<<" ";
                }
                cout<<endl;
            }
            cout << empty3 << endl;
            return;
        }

        // Check Restriction in array
        if (!maz[r][c])
        {
            return;
        }

        path[r][c] = step;
        maz[r][c] = false;
        // Down
        if (r < n - 1)
        {
            all_pathPrint(empty3 + 'D', maz, r + 1, c, n, path, step+1);
        }

        // Right
        if (c < n - 1)
        {
            all_pathPrint(empty3 + 'R', maz, r, c + 1, n, path, step+1);
        }

        // Left
        if(c > 0){
            all_pathPrint(empty3 + 'L', maz, r, c-1, n, path, step+1);
        }

        //Up
        if(r > 0){
            all_pathPrint(empty3 + 'U', maz, r-1, c, n, path, step+1);
        }

        // Backtrack

        path[r][c] = 0;
        maz[r][c] = true;
    }
};
int main()
{
    Maze_Problems maze;
    // cout << maze.count(3, 3);
    // cout << endl;
    // maze.PrintDirection("", 3, 3);
    // cout << endl;
    // maze.Hrzntl_Vrticl_Dignl("", 3, 3);
    bool arr[3][3] =  { {true, false, true},
                        {true, false, false},
                        {true, true, true} };

    cout << endl;
    int path[3][3] =  { {0, 0, 0},
                        {0, 0, 0},
                        {0, 0, 0} };
    maze.Path_restrictions("", arr, 0, 0, 3);
    // maze.All_Paths("",arr,0,0,3);
    // maze.all_pathPrint("",arr,0,0,3,path,1);
    return 0;
}