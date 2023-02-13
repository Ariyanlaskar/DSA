// CodeStudio Problem
#include <bits/stdc++.h>
using namespace std;
bool isPossibleSol(vector<int> &arr, int n, int m, int mid)
{
    int key = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            key += 1;
            if (key > m || arr[i] > mid)
            {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m)
{
    int start = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossibleSol(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
// Input : 12 34 67 90
// Output : 113
