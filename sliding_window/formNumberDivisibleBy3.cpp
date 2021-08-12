#include <iostream>
// #include<deque>
// #include<queue>
#include <vector>
using namespace std;

vector<int> numberDiviBy3(vector<int> ans, int k)
{
    int n = ans.size();
    vector<int> res;
    int sum = 0;
    bool found = false;
    for (int i = 0; i < k; i++)
    {

        sum += ans[i];
    }
    if (sum % 3 == 0)
    {
        res.push_back(ans[0]);
        res.push_back(ans[k -2]);
        res.push_back(ans[k - 1]);
        found = true;
    }
    for (int i = k; i < n; i++)
    {
        if (found)
        {
            break;
        }
        sum = sum + ans[i] - ans[i - k];
        if (sum % 3 == 0)
        {
            res.push_back(ans[i - k + 1]);
            res.push_back(ans[i-k+2]);
            res.push_back(ans[i]);
            found=true;
        }
    }
    if(!found){
        res.push_back(-1);
    }

    if(res[0]==-1){
        cout<<"not found"<<endl;
    }
    else{
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<int>ans={1,1,0,0,1,1,0,0};
    int k=3;
    numberDiviBy3(ans,k);


    return 0;
}
