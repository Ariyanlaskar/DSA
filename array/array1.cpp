#include<iostream>
#include<climits>
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxx=INT_MIN;
int minn=INT_MAX;
for(int i=0;i<n;i++){
    maxx=max(arr[i],maxx);
    minn=min(arr[i],minn);
}
cout<<maxx<<" and "<<minn<<endl;


    return 0;
}