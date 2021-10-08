#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    vector<int>arr={1,11,2,10,4,5,2,1};
    vector<int>forward(n,1),backward(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                forward[i]=max(forward[i],1+forward[j]);
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(arr[i]>arr[j]){
                backward[i]=max(backward[i],backward[j]+1);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,forward[i]+backward[i]-1);
    }
    cout<<ans<<endl;
    return 0;
}