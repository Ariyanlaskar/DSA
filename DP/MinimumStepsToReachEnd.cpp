#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>steps(n,INT_MAX);
    vector<int>arr(n);
    for(auto &i:arr){
        cin>>i;
    }
    if(arr[0]==0){
        cout<<INT_MAX<<endl;
    }
    steps[0]=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(i<=(j+arr[j])){
                steps[i]=min(steps[i],steps[j]+1);
            }
        }
    }
    cout<<steps[n-1]<<endl;
    return 0;
}