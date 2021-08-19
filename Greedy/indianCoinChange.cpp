#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr(10);
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the value of x : " <<endl;
    cin>>x;
    sort(arr.begin(),arr.end(),greater<int>());
    int sum=0;
    for(int i=0;i<10;i++){
        
        sum+=x/arr[i];
        x=x-x/arr[i]*arr[i];
    }
    cout<<sum<<endl;
    return 0;
}