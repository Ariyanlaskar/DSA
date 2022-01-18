#include <bits/stdc++.h>
using namespace std;
bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    flowerbed.insert(flowerbed.begin(), 0);
    flowerbed.push_back(0);
    int i = 0;
    while (i < flowerbed.size() - 2)
    {
        if (flowerbed[i] + flowerbed[i + 1] + flowerbed[i + 2] == 0)
        {
            n--;
            i++;
        }
        i++;
    }
    if (n <= 0)
    {
        return true;
    }
    return false;
}
// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true