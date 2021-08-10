#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int get_max_area(vector<int> a){
    int n=a.size();
    int i=0;
    int ans=0;
    stack<int>st;
    // a.push_back(0);
    while(i<n){
        while(!st.empty() && a[st.top()]>a[i]){
            int t=st.top();
            int h=a[st.top()];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else{
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }
        }
        st.push(i); 
        i++;
    }
    return ans;
}

int main(){

    vector<int> a={5,1,4,5,2,1};
    cout<<get_max_area(a)<<endl;
}