#include <bits/stdc++.h>
using namespace std;
int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<int> row, col;
    for (int i = 0; i < n; i++)
    {
        int maxInRow = 0, maxInCol = 0;
        for (int j = 0; j < m; j++)
        {
            maxInRow = max(maxInRow, grid[i][j]);
            maxInCol = max(maxInCol, grid[j][i]);
        }
        row.push_back(maxInRow);
        col.push_back(maxInCol);
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int diff = min(row[i], col[j]) - grid[i][j];
            k += diff;
        }
    }
    return k;
}
int main(){
    vector<vector<int>>grid = {{3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0}};
    cout<<maxIncreaseKeepingSkyline(grid)<<endl;
    return 0;
}
// Input: grid = [[3,0,8,4],[2,4,5,7],[9,2,6,3],[0,3,1,0]]
// Output: 35
