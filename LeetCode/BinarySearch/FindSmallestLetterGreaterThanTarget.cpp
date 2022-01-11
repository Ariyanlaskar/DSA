#include <bits/stdc++.h>
using namespace std;
char nextGreatestLetter(vector<char> &letters, char target)
{
    int start = 0, end = letters.size() - 1;
    bool found = false;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (letters[mid] > target)
        {
            found = true;
            end = mid - 1;
        }
        else if (letters[mid] <= target)
        {
            start = mid + 1;
        }
    }
    if (!found)
    {
        return letters[0];
    }
    return letters[start];
}
// Input: letters = ["c","f","j"], target = "a"
// Output: "c"