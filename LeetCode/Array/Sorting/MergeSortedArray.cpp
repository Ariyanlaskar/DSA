#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0;
    vector<int> v;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
        }
        else
        {
            v.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m)
    {
        v.push_back(nums1[i]);
        i++;
    }
    while (j < n)
    {
        v.push_back(nums2[j]);
        j++;
    }
    nums1 = v;
}

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
