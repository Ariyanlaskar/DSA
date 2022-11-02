#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findBall(vector<vector<int>> &grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        vector<int> ans(col, -1);
        for (int i = 0; i < col; i++)
        {
            ans[i] = isPossible(grid, row, col, 0, i);
        }
        return ans;
    }
    bool isValid(int row, int col, int i, int j)
    {
        if (i >= 0 && i < row && j >= 0 && j < col)
        {
            return true;
        }
        return false;
    }
    int isPossible(vector<vector<int>> &grid, int row, int col, int i, int j)
    {
        if (i == row)
        {
            return j;
        }
        if (isValid(row, col, i, j))
        {
            if (grid[i][j] == 1 && isValid(row, col, i, j + 1) && grid[i][j + 1] == 1)
            {
                return isPossible(grid, row, col, i + 1, j + 1);
            }
            else if (grid[i][j] == -1 && isValid(row, col, i, j - 1) && grid[i][j - 1] == -1)
            {
                return isPossible(grid, row, col, i + 1, j - 1);
            }
        }
        return -1;
    }
};

// Input : grid = [ [ 1, 1, 1, -1, -1 ], [ 1, 1, 1, -1, -1 ], [ -1, -1, -1, 1, 1 ], [ 1, 1, 1, 1, -1 ], [ -1, -1, -1, -1, -1 ] ]
// Output : [ 1, -1, -1, -1, -1 ]