#include <bits/stdc++.h>
using namespace std;
int kthSmallest(vector<vector<int>> &matrix, int k)
{
    int n = matrix.size();
    int low = matrix[0][0];
    int high = matrix[n - 1][n - 1];
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (countMin(matrix, mid) >= k)
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
int countMin(vector<vector<int>> &matrix, int mid)
{
    int count = 0;
    int n = matrix.size();
    int row = 0;
    int column = n - 1;
    while (row <= n - 1 && column >= 0)
    {
        if (matrix[row][column] <= mid)
        {
            count += column + 1;
            row++;
        }
        else
        {
            column--;
        }
    }
    return count;
}

// Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
// Output: 13