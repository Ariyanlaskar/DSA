#include <bits/stdc++.h>
using namespace std;
int kthSmallest(vector<vector<int>> &matrix, int k)
{
    int n = matrix.size();
    int low = matrix[0][0], high = matrix[n - 1][n - 1];
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (countMin(mid, matrix) >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int countMin(int m, vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int count = 0, row = 0, col = n - 1;
    while (row <= n - 1 && col >= 0)
    {
        if (matrix[row][col] <= m)
        {
            count += col + 1;
            row++;
        }
        else
        {
            col--;
        }
    }
    return count;
}
// Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
// Output: 13