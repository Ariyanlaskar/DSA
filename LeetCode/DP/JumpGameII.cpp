#include<bits/stdc++.h>
using namespace std;
int jump(vector<int>& nums){
    int n=nums.size();
    vector<int>steps(n,INT_MAX);
    steps[0]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(i<=j+nums[j]){
                steps[i]=min(steps[i],steps[j]+1);
            }
        }
    }
    return steps[n-1];
}
int main(){
    vector<int>nums={2,3,1,1,4};
    cout<<jump(nums)<<endl;
    return 0;
}