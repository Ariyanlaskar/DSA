#include <bits/stdc++.h>
using namespace std;
unordered_map<int, stack<int>> freqStack;
unordered_map<int, int> freq;
int maxCount = 0;
FreqStack() //empty function
{
}

void push(int val)
{
    freq[val]++;
    maxCount = max(maxCount, freq[val]);
    freqStack[freq[val]].push(val);
}

int pop()
{
    int t = freqStack[maxCount].top();
    freqStack[maxCount].pop();
    freq[t]--;
    if (freqStack[maxCount].empty())
    {
        maxCount--;
    }
    return t;
}
// Input
// ["FreqStack", "push", "push", "push", "push", "push", "push", "pop", "pop", "pop", "pop"]
// [[], [5], [7], [5], [7], [4], [5], [], [], [], []]
// Output
// [null, null, null, null, null, null, null, 5, 7, 5, 4]