#include <bits/stdc++.h>
using namespace std;
TreeNode *constructMaximumBinaryTree(vector<int> &nums)
{
    return helper(nums, 0, nums.size() - 1);
}
TreeNode *helper(vector<int> &nums, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int idx = -1;
    int mx = -1;
    for (int i = start; i <= end; i++)
    {
        if (nums[i] >= mx)
        {
            idx = i;
            mx = nums[i];
        }
    }
    TreeNode *root = new TreeNode(mx);
    root->left = helper(nums, start, idx - 1);
    root->right = helper(nums, idx + 1, end);
    return root;
}

// Input: nums = [3,2,1,6,0,5]
// Output: [6,3,5,null,2,0,null,null,1]