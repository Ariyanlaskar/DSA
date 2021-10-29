#include<bits/stdc++.h>
using namespace std;
void solve(int idx,vector<int>&candidates,vector<vector<int>>&v,vector<int>&ans,int target){
    if(idx==candidates.size()){
        if(target==0){
            v.push_back(ans);
        }
        return;
    }
    if(candidates[idx]<=target){
        ans.push_back(candidates[idx]);
        solve(idx,candidates,v,ans,target-candidates[idx]);
        ans.pop_back();
    }
    solve(idx+1,candidates,v,ans,target);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>v;
    vector<int>ans;
    solve(0,candidates,v,ans,target);
    return v;
}
int main(){
    vector<int>candidates = {2,3,5};
    int target=8;
    return 0;
}
// Output = [[2,2,2,2],[2,3,3],[3,5]];
