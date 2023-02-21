#include <bits/stdc++.h>
using namespace std;
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1, j = m - 1;
    int carry = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        ans.push_back((a[i] + b[j] + carry) % 10);
        carry = (a[i] + b[j] + carry) / 10;
        i--, j--;
    }
    while (i >= 0)
    {
        ans.push_back(a[i] + carry % 10);
        carry = (a[i] + carry) / 10;
        i--;
    }
    while (j >= 0)
    {
        ans.push_back(b[j] + carry % 10);
        carry = (b[j] + carry) / 10;
        j--;
    }
    if (carry != 0)
    {
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

// Input : 4 1
//         1 2 3 4
//         6

// Output : 1 2 4 0