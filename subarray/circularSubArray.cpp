#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int n){
    int cursum=0;
    int maxx=INT_MIN;
    for(int i=0;i<n;i++){
        cursum+=a[i];
        if(cursum<0){
            cursum=0;
        }
        maxx=max(cursum,maxx);
    }
    return maxx;

}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }

    cout<<totalsum+kadane(a,n)<<endl;



    return 0;
}