#include <bits/stdc++.h>
using namespace std;
// void rotate(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> mat(n, vector<int>(m, 0));
//     for (int i = 0; i < n; i++)
//     {
//         int r = n;
//         for (int j = 0; j < m; j++)
//         {
//             mat[i][j] = matrix[r - 1][i];
//             r = r - 1;
//         }
//     }
//     matrix = mat;
// }

// OR(optimised Method)

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int left = 0, right = n - 1;
        while (left < right)
        {
            swap(matrix[i][left], matrix[i][right]);
            left++;
            right--;
        }
    }
}
//  matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
// Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
