#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int n1 = n - 1;
    int m1 = m - 1;
    int i = m + n - 1;

    while (n1 >= 0)
    {
        if (m1 >= 0 && nums1[m1] > nums2[n1])
        {
            nums1[i] = nums1[m1];
            i--;
            m1--;
        }
        else
        {
            nums1[i] = nums2[n1];
            i--;
            n1--;
        }
    }
}