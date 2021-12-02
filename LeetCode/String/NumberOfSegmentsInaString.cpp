//LeetCode Easy 434;
#include <bits/stdc++.h>
using namespace std;
int countSegments(string s)
{
    int n = s.size();
    if (n <= 0)
    {
        return 0;
    }
    int ans = -1;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == ' ' && s[i - 1] != ' ')
        {
            count++;
        }
    }
    if (s[n - 1] != ' ')
    {
        ans = count + 1;
    }
    else if (s[n - 1] == ' ')
    {
        ans = count;
    }
    else if (s[0] == ' ')
    {
        ans = count - 1;
    }
    return ans;
}
int main(){
    string  s = "Hello, my name is John";
    cout<<countSegments(s)<<endl;
    return 0;
}
// Input: s = "Hello, my name is John"
// Output: 5
// Explanation: The five segments are ["Hello,", "my", "name", "is", "John"];