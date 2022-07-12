#include <bits/stdc++.h>
using namespace std;
double average(vector<int> &salary)
{
    double sum = 0;
    sort(salary.begin(), salary.end());
    for (int i = 1; i < salary.size() - 1; i++)
    {
        sum += salary[i];
    }
    return sum / (salary.size() - 2);
}
// Input: salary = [4000,3000,1000,2000]
// Output: 2500.00000