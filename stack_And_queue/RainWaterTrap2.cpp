#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int RainWatrer2(vector<int>a){
    int n=a.size();
    int ans=0;
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]<a[i]){
            int curr=st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            else{
                int diff=i-st.top()-1;
                ans+=(min(a[st.top()],a[i])-a[curr]) * diff;
            }
        }
        st.push(i);
    }
    return ans;

}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<RainWatrer2(a)<<endl;

    return 0;
}
