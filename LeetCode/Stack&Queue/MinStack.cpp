//LeetCode Easy 155;
#include <bits/stdc++.h>
using namespace std;
/** initialize your data structure here. */
int i;
int j;
int arr[40000];
int min[40000];
MinStack()
{
    i = -1;
    j = -1;
}

void push(int val)
{
    if (i == -1)
    {
        i++;
        j++;
        arr[i] = val;
        min[j] = val;
    }
    else
    {
        i++;
        arr[i] = val;
        if (min[j] > val)
        {
            j++;
            min[j] = val;
        }
        else
        {
            j++;
            min[j] = min[j - 1];
        }
    }
}
void pop()
{
    if (i >= 0)
    {
        cout << arr[i] << endl;
        i--;
        j--;
    }
}

int top()
{
    return arr[i];
}

int getMin()
{
    return min[j];
}
