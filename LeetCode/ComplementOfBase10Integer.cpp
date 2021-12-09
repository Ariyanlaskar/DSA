#include <bits/stdc++.h>
using namespace std;
int bitwiseComplement(int n)
{
    vector<int> res;
    if (n == 0)
    {
        return 1;
    }
    int ans = 0;
    while (n)
    {
        int rem = n % 2;
        n = n / 2;
        res.push_back(rem);
    }
    int s = res.size();
    reverse(res.begin(), res.end());
    for (int i = 0; i < s; i++)
    {
        if (res[i] == 0)
        {
            res[i] = 1;
            ans += res[i] * (pow(2, s - i - 1));
        }
        else
        {
            res[i] = 0;
            ans += res[i] * (pow(2, s - i - 1));
        }
    }
    return ans;
}
int main()
{
    int n = 5;
    cout<<bitwiseComplement(n)<<endl;
    return 0;
}
// Input: n = 5;
// Output: 2;