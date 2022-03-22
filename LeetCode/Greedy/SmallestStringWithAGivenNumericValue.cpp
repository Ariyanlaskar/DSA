#include <bits/stdc++.h>
using namespace std;
string getSmallestString(int n, int k)
{
    string ans = "";
    int j = 26;
    while (j >= 1 && n > 0)
    {
        if ((k - j) >= n - 1)
        {
            ans += (j - 1) + 'a';
            k = k - j;
            n--;
        }
        else
        {
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
// Input: n = 3, k = 27
// Output: "aay"