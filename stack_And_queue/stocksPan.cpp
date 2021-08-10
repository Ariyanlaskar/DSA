#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> stockspan(vector<int> a){
    vector<int>ans;
    stack<pair<int,int>>st;
    for(int d:a){
        int day=1;
        while(!st.empty() && st.top().first<=d){
            day+=st.top().second;
            st.pop();
        }
        st.push({d,day});
        ans.push_back(day);
    }
    return ans;
}

int main(){
   
    vector<int>a={100,80,60,70,60,75,85};
    vector<int> res=stockspan(a);
    for(int i=0;i<a.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;


    return 0;
}