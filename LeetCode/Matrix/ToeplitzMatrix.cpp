#include <bits/stdc++.h>
using namespace std;
bool isToeplitzMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (matrix[i][j] != matrix[i + 1][j + 1])
            {
                return false;
            }
        }
    }
    return true;
}
// Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
// Output: true