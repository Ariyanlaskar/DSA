//LeetCode Medium 40;
#include<bits/stdc++.h>
using namespace std;
void findCombination(int idx,vector<int>&candidates,vector<vector<int>>&res,vector<int>&ans,int target){
    if(target==0){
        res.push_back(ans);
        return ;
    }
    if(target<0){
        return; 
    }
    for(int i=idx;i<candidates.size();i++){
        if(i>idx && candidates[i]==candidates[i-1]){
            continue;
        }
        if(candidates[i]>target){
            break;
        }
        ans.push_back(candidates[i]);
        findCombination(idx+1,candidates,res,ans,target-candidates[i]);
        ans.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>>res;
    vector<int>ans;
    sort(candidates.begin(),candidates.end());
    findCombination(0,candidates,res,ans,target);
    return res;
}
// some test cases : candidates = [10,1,2,7,6,1,5], target = 8
//Output: 
// [
// [1,1,6],
// [1,2,5],
// [1,7],
// [2,6]
// ]
