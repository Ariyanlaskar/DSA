#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int r = matrix.size();
    int c = matrix[0].size();
    int i = 0;
    int j = c - 1;
    while (i < r && j >= 0)
    {
        if (target == matrix[i][j])
        {
            return true;
        }
        else if (target > matrix[i][j])
        {
            i = i + 1;
        }
        else if (target < matrix[i][j])
        {
            j = j - 1;
        }
    }
    return false;
}
// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
// Output: true