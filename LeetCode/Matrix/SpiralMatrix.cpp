#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int n = matrix.size();
    int m = matrix[0].size();
    int colS = 0, colE = m - 1, rowS = 0, rowE = n - 1;
    int t = n * m;
    while (rowS <= rowE && colS <= colE)
    {
        for (int col = colS; col <= colE; col++)
        {
            ans.push_back(matrix[rowS][col]);
            t--;
        }
        rowS++;
        if (t == 0)
        {
            break;
        }
        for (int row = rowS; row <= rowE; row++)
        {
            ans.push_back(matrix[row][colE]);
            t--;
        }
        colE--;
        if (t == 0)
        {
            break;
        }
        for (int col = colE; col >= colS; col--)
        {
            ans.push_back(matrix[rowE][col]);
            t--;
        }
        rowE--;
        if (t == 0)
        {
            break;
        }
        for (int row = rowE; row >= rowS; row--)
        {
            ans.push_back(matrix[row][colS]);
            t--;
        }
        colS++;
        if (t == 0)
        {
            break;
        }
    }
    return ans;
}
// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]