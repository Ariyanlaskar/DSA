#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int reduntantP(string a){
    int n=a.size();
    stack<char>st;
    bool ans=false;
    for(int i=0;i<n;i++){
        if(a[i]=='+' || a[i]=='-'|| a[i]=='/' || a[i]=='*'){
            st.push(a[i]);
        }
        else if(a[i]=='('){
            st.push(a[i]);
        }
        else if(a[i]==')'){
            if(st.top()=='('){
                ans=true;
            }
            while(st.top()=='+' || st.top()=='-' ||st.top()=='/' || st.top()=='*'){
                st.pop();
            }
            st.pop();
        }
    }
    return ans;
}

int main(){

    string a;
    cin>>a;
    cout<<reduntantP(a)<<endl;

    return 0;

}