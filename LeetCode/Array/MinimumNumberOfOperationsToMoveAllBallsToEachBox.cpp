#include <bits/stdc++.h>
using namespace std;
vector<int> minOperations(string boxes)
{
    vector<int> ans;
    int n = boxes.size();
    int i = 0;
    while (i < n)
    {
        int op = 0;
        for (int j = 0; j < n; j++)
        {
            if (boxes[j] == '1')
            {
                op += abs(i - j);
            }
        }
        ans.push_back(op);
        i++;
    }
    return ans;
}
// Input: boxes = "001011"
// Output: [11,8,5,4,3,4]