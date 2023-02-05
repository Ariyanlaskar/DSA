#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

//  Input  : n = 00000000000000000000000000001011
//  Output : 3