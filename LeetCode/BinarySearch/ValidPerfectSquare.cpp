//LeetCode Easy 367;
#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int num)
{
    long long left = 0, right = num;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long x = mid * mid;
        if (x == num)
        {
            return true;
        }
        if (x < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
int main()
{
    int num = 14;
    cout<<isPerfectSquare(num)<<endl;
    return 0;
}
// Input: num = 14
// Output: false