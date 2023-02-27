#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0, end = row * col - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int elem = matrix[mid / col][mid % col];
        if (target == elem)
        {
            return true;
        }
        else if (target > elem)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true