//LeetCode Easy 476
#include <bits/stdc++.h>
using namespace std;
int findComplement(int num)
{
    vector<int> res;
    int q = num;
    int ans = 0;
    while (q)
    {
        int rem = q % 2;
        q = q / 2;
        res.push_back(rem);
    }
    int n = res.size();
    reverse(res.begin(), res.end());
    for (int i = 0; i < n; i++)
    {
        if (res[i] == 0)
        {
            res[i] = 1;
            ans += res[i] * (pow(2, n - i - 1));
        }
        else
        {
            res[i] = 0;
            ans += res[i] * (pow(2, n - i - 1));
        }
    }
    return ans;
}
int main()
{
    int num = 5;
    cout<<findComplement(num)<<endl;
    return 0;
}
// Input: num = 5
// Output: 2