#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void max1(int a[],int n,int k){
    int zerocnt=0;
    int ans=0;
    int i=0;
    for(int j=i;j<n;j++){
        if(a[j]==0){
            zerocnt++;
        }
        while(zerocnt>k){
            if(a[i]==0){
                zerocnt--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;
    
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;cin>>k;

    max1(a,n,k);

}