#include <bits/stdc++.h>
using namespace std;
int compareVersion(string version1, string version2)
{
    int i = 0, j = 0;
    int temp1 = 0, temp2 = 0;
    while (i < version1.size() || j < version2.size())
    {
        while (i < version1.size() && version1[i] != '.')
        {
            temp1 = temp1 * 10 + (version1[i] - '0');
            i++;
        }
        while (j < version2.size() && version2[j] != '.')
        {
            temp2 = temp2 * 10 + (version2[j] - '0');
            j++;
        }
        if (temp1 > temp2)
        {
            return 1;
        }
        if (temp1 < temp2)
        {
            return -1;
        }
        i++;
        j++;
        temp1 = 0;
        temp2 = 0;
    }
    return 0;
}
// Input: version1 = "1.01", version2 = "1.001"
// Output: 0