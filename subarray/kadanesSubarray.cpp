#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currsum=0;
    int maxx=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxx=max(currsum,maxx);
    }
    cout<<maxx<<endl;


    return 0;

}