#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans(m, vector<int>(n, -1));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = matrix[j][i];
        }
    }
    return ans;
}
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[1,4,7],[2,5,8],[3,6,9]]