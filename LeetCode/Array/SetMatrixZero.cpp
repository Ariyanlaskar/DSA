#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    vector<int> row;
    vector<int> col;
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
    for (int i = 0; i < row.size(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[row[i]][j] = 0;
        }
    }
    for (int i = 0; i < col.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[j][col[i]] = 0;
        }
    }
}
//Test Case;
// Input : matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]];
// Output: matrix = [[0,0,0,0],[0,4,5,0],[0,3,1,0]]; 
