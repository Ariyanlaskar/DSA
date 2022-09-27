#include <bits/stdc++.h>
using namespace std;
string pushDominoes(string str)
{
    int n = str.size();
    vector<char> arr(n + 2);
    arr[0] = 'L';
    arr[n + 1] = 'R';
    for (int i = 1; i < n + 1; i++)
    {
        arr[i] = str[i - 1];
    }
    int i = 0, j = 1;
    while (j < arr.size())
    {
        while (arr[j] == '.')
        {
            j++;
        }
        if (j - i > 1)
        {
            solve(i, j, arr);
        }
        i = j;
        j++;
    }
    string res = "";
    for (int i = 1; i < n + 1; i++)
    {
        // res += arr[i];
        res.push_back(arr[i]);
    }
    return res;
}
void solve(int i, int j, vector<char> &arr)
{
    if (arr[i] == 'L' && arr[j] == 'L')
    {
        for (int k = i + 1; k < j; k++)
        {
            arr[k] = 'L';
        }
    }
    else if (arr[i] == 'R' && arr[j] == 'R')
    {
        for (int k = i + 1; k < j; k++)
        {
            arr[k] = 'R';
        }
    }
    else if (arr[i] == 'R' && arr[j] == 'L')
    {
        int diff = j - i;
        int mid = (i + j) / 2;
        if (diff % 2 == 0)
        {
            for (int k = i + 1; k < mid; k++)
            {
                arr[k] = 'R';
            }
            for (int k = mid + 1; k < j; k++)
            {
                arr[k] = 'L';
            }
        }
        else
        {
            for (int k = i + 1; k <= mid; k++)
            {
                arr[k] = 'R';
            }
            for (int k = mid + 1; k < j; k++)
            {
                arr[k] = 'L';
            }
        }
    }
}
// Input: dominoes = "RR.L"
// Output: "RR.L"
