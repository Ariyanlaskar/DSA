#include <bits/stdc++.h>
using namespace std;
int numIslands(vector<vector<char>> &grid)
{
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == '1')
            {
                count++;
                dfs(i, j, grid);
            }
        }
    }
    return count;
}
void dfs(int i, int j, vector<vector<char>> &grid)
{
    if (i >= grid.size() || i < 0 || j < 0 || j >= grid[i].size() || grid[i][j] == '0')
    {
        return;
    }
    grid[i][j] = '0';
    dfs(i + 1, j, grid);
    dfs(i - 1, j, grid);
    dfs(i, j + 1, grid);
    dfs(i, j - 1, grid);
}
// Input: grid = [
//   ["1","1","1","1","0"],
//   ["1","1","0","1","0"],
//   ["1","1","0","0","0"],
//   ["0","0","0","0","0"]
// ]
// Output: 1