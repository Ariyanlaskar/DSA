// CodeStudio Questions

#include <bits/stdc++.h>
using namespace std;
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (first == -1 && arr[i] == k)
        {
            first = i;
            break;
        }
    }
    for (int j = n - 1; j >= 0; j--)
    {
        if (last == -1 && arr[j] == k)
        {
            last = j;
            break;
        }
    }
    p.first = first;
    p.second = last;
    return p;
}

// Sample Input;
//  2
//  6 3
//  0 5 5 6 6 6
//  8 2
//  0 0 1 1 2 2 2 2

// Sample Output
//  -1 -1
//  4 7