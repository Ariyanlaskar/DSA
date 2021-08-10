#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int zerocnt=0;
    int ans=0;
    
    for(int i=0;i<n;i++){
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
    }
    cout<<ans<<endl;
    return 0;
}