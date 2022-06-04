#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mat;
NumMatrix(vector<vector<int>> &matrix)
{
    mat = matrix;
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] += matrix[i - 1][j];
        }
    }
    mat = matrix;
}

int sumRegion(int row1, int col1, int row2, int col2)
{
    int sum = mat[row2][col2];
    if (col1 != 0)
    {
        sum -= mat[row2][col1 - 1];
    }
    if (row1 != 0)
    {
        sum -= mat[row1 - 1][col2];
    }
    if (row1 != 0 && col1 != 0)
    {
        sum += mat[row1 - 1][col1 - 1];
    }
    return sum;
}