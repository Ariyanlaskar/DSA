// Problem From CodeStudio;

#include <bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    int s = 0;
    vector<int> v;
    for (int i = 0; i < mCols; i++)
    {
        if (s == 0)
        {
            for (int j = 0; j < nRows; j++)
            {
                v.push_back(arr[j][i]);
            }
            s = 1;
        }
        else if (s == 1)
        {
            for (int j = nRows - 1; j >= 0; j--)
            {
                v.push_back(arr[j][i]);
            }
            s = 0;
        }
    }
    return v;
}
// Input  : 1 2 3 4
//          5 6 7 8
//          9 10 11 12

// Output : 1 5 9 10 6 2 3 7 11 12 8 4