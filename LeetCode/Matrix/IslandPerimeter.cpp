#include <bits/stdc++.h>
using namespace std;
int islandPerimeter(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int count = 4;
            if (grid[i][j] == 1)
            {
                if (i - 1 >= 0 && grid[i - 1][j] == 1)
                {
                    count -= 1;
                }
                if (i + 1 < n && grid[i + 1][j] == 1)
                {
                    count -= 1;
                }
                if (j - 1 >= 0 && grid[i][j - 1] == 1)
                {
                    count -= 1;
                }
                if (j + 1 < m && grid[i][j + 1] == 1)
                {
                    count -= 1;
                }
                ans += count;
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>>grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    cout<<islandPerimeter(grid)<<endl;
    return 0;
}
// Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
// Output: 16
// Explanation: The perimeter is the 16 yellow stripes in the image above.