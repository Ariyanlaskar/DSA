#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> nums;
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (nums1[i] <= nums2[j])
        {
            nums.push_back(nums1[i]);
            i++;
        }
        else
        {
            nums.push_back(nums2[j]);
            j++;
        }
    }
    while (i < n1)
    {
        nums.push_back(nums1[i]);
        i++;
    }
    while (j < n2)
    {
        nums.push_back(nums2[j]);
        j++;
    }
    double n = nums.size();
    int l = n / 2;
    if ((nums.size()) % 2 != 0)
    {
        return nums[l];
    }
    else
    {
        return double(nums[l] + nums[l - 1]) / 2;
    }
}
int main()
{
    vector<int>nums1 = {1,3}, nums2 = {2};
    cout<<findMedianSortedArrays(nums1,nums2)<<endl;
    return 0;
}

// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.