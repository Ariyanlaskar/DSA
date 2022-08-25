#include <bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k)
{
    int i = 0, j = 0, maxCharCount = 0;
    int maxLength = 0;
    int count[26] = {0};
    int n = s.size();
    while (j < n)
    {
        count[s[j] - 'A']++;
        maxCharCount = max(maxCharCount, count[s[j] - 'A']);
        if (j - i + 1 - maxCharCount > k)
        {
            count[s[i] - 'A']--;
            i++;
        }
        maxLength = max(maxLength, j - i + 1);
        j++;
    }
    return maxLength;
}
// Input: s = "ABAB", k = 2
// Output: 4