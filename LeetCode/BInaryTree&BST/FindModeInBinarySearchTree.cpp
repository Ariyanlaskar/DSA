#include <bits/stdc++.h>
using namespace std;
vector<int> findMode(TreeNode *root)
{
    int max = 0;
    vector<int> ans;
    int preVal = 0;
    int curr = 0;
    findFreq(root, max, preVal, curr, ans);
    return ans;
}
void findFreq(TreeNode *root, int &max, int &preVal, int &curr, vector<int> &ans)
{
    if (root != NULL)
    {
        findFreq(root->left, max, preVal, curr, ans);
        if (preVal == root->val)
        {
            curr++;
        }
        else
        {
            preVal = root->val;
            curr = 1;
        }
        if (curr == max)
        {
            ans.push_back(root->val);
        }
        else if (curr > max)
        {
            max = curr;
            ans = {};
            ans.push_back(root->val);
        }
        findFreq(root->right, max, preVal, curr, ans);
    }
}
// Input: root = [1,null,2,2]
// Output: [2]