#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            while (i + 1 < nums1.size() && j + 1 < nums2.size() && ((nums1[i] == nums1[i + 1]) || (nums2[j] == nums2[j + 1])))
            {
                if (nums1[i] == nums1[i + 1])
                {
                    i++;
                }
                if (nums2[j] == nums2[j + 1])
                {
                    j++;
                }
            }
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            i++;
        }
    }
    return ans;
}

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]