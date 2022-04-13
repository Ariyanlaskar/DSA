#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int c = 1;
    int colStart = 0, colEnd = n - 1, rowStart = 0, rowEnd = n - 1;
    while (colStart <= colEnd && rowStart <= rowEnd)
    {
        for (int col = colStart; col <= colEnd; col++)
        {
            matrix[rowStart][col] = c;
            c++;
        }
        rowStart++;
        for (int row = rowStart; row <= rowEnd; row++)
        {
            matrix[row][colEnd] = c;
            c++;
        }
        colEnd--;
        for (int col = colEnd; col >= colStart; col--)
        {
            matrix[rowEnd][col] = c;
            c++;
        }
        rowEnd--;
        for (int row = rowEnd; row >= rowStart; row--)
        {
            matrix[row][colStart] = c;
            c++;
        }
        colStart++;
    }
    return matrix;
}

// Input: n = 3
// Output: [[1,2,3],[8,9,4],[7,6,5]]