//Using Two Pointer Approach; 
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& arr, int target) {
    int n=arr.size();
    int i=0;
    int j=n-1;
    vector<int>ans;
    while(i<j){
        if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
        else{
            ans.push_back(i+1);
            ans.push_back(j+1);
            break;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={2,7,11,15};
    int target=9;
    return 0;
}