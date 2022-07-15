#include <bits/stdc++.h>
using namespace std;
int check(vector<vector<int>> &grid, int i, int j)
{
    int n = grid.size();
    int m = grid[0].size();
    int count = 1;
    if (i + 1 < n && grid[i + 1][j] == 1)
    {
        grid[i + 1][j] = 0;
        count += check(grid, i + 1, j);
    }
    if (i > 0 && grid[i - 1][j] == 1)
    {
        grid[i - 1][j] = 0;
        count += check(grid, i - 1, j);
    }
    if (j + 1 < m && grid[i][j + 1] == 1)
    {
        grid[i][j + 1] = 0;
        count += check(grid, i, j + 1);
    }
    if (j > 0 && grid[i][j - 1] == 1)
    {
        grid[i][j - 1] = 0;
        count += check(grid, i, j - 1);
    }
    return count;
}
int maxAreaOfIsland(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                int sq = 0;
                grid[i][j] = 0;
                sq += check(grid, i, j);
                ans = max(sq, ans);
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>>grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,1,1,0,1,0,0,0,0,0,0,0,0},{0,1,0,0,1,1,0,0,1,0,1,0,0},{0,1,0,0,1,1,0,0,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,0,0,0,0,0,0,1,1,0,0,0,0}};
    cout<<maxAreaOfIsland(grid)<<endl;
    return 0;
}
//Input: grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
// Output: 6
