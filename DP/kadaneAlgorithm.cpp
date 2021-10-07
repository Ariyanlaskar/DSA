#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currSum=0;
    int maxTillSum=0;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxTillSum=max(currSum,maxTillSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxTillSum<<endl;
    return 0;
}