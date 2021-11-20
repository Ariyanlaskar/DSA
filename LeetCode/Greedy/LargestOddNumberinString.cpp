//LeetCode Easy 1903;
#include <bits/stdc++.h>
using namespace std;
string largestOddNumber(string num)
{
    int j = num.size() - 1;
    string s = "";
    while (j >= 0)
    {
        if ((num[j]) % 2 != 0)
        {
            break;
        }
        j--;
    }
    return num.substr(0, j + 1);
}
int main()
{
    string num = "35427";
    cout<<largestOddNumber(num)<<endl;
    return 0;
}
// Output: "35427"
// Explanation: "35427" is already an odd number.