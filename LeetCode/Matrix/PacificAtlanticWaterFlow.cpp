#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
{
    int n = heights.size();
    int m = heights[0].size();
    vector<vector<int>> res;
    vector<vector<int>> pacific(n, vector<int>(m, 0));
    vector<vector<int>> atlantic(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        dfs(heights, i, 0, INT_MIN, pacific);
        dfs(heights, i, m - 1, INT_MIN, atlantic);
    }
    for (int i = 0; i < m; i++)
    {
        dfs(heights, 0, i, INT_MIN, pacific);
        dfs(heights, n - 1, i, INT_MIN, atlantic);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (pacific[i][j] && atlantic[i][j])
            {
                vector<int> ans(2);
                ans[0] = i;
                ans[1] = j;
                res.push_back(ans);
            }
        }
    }
    return res;
}
void dfs(vector<vector<int>> &heights, int i, int j, int prev, vector<vector<int>> &ocean)
{
    if (i < 0 || j < 0 || i >= heights.size() || j >= heights[0].size() || ocean[i][j] || heights[i][j] < prev)
    {
        return;
    }
    ocean[i][j] = 1;
    dfs(heights, i + 1, j, heights[i][j], ocean);
    dfs(heights, i - 1, j, heights[i][j], ocean);
    dfs(heights, i, j + 1, heights[i][j], ocean);
    dfs(heights, i, j - 1, heights[i][j], ocean);
}
// Input: heights = [[1,2,2,3,5],[3,2,3,4,4],[2,4,5,3,1],[6,7,1,4,5],[5,1,1,2,4]]
// Output: [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]