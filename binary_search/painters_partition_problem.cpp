#include <iostream>

using namespace std;
int isFeasible(int boards[], int n, int limits)
{
    int sum = 0;
    int painters = 1;
    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
        if (sum > limits)
        {
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}
int MinUnit(int boards[], int n, int m)
{
    int k = 0;
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        k = max(boards[i], k);
        totalsum += boards[i];
    }
    int start = k;
    int end = totalsum;
    while (start < end)
    {
        int mid = (start + end) / 2;
        int painter = isFeasible(boards, n, mid);
        if (painter > m)
        {
            start= mid+1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    int boards[] = {4,2,22,8,2,11,19,13};
    int n = 8;
    int m = 3;
    cout << MinUnit(boards, n, m);

    return 0;
}