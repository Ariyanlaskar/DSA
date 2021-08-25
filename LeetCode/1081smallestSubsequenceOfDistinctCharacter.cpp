#include<bits/stdc++.h>
using namespace std;
string smallestSubsequence(string s) {
        string ans="";
       map<char,bool>exists;
        map<char,int>freq;
        for(int i=0;i<s.length();i++){
            exists[s[i]]=false;
            freq[s[i]]++;
        }
        stack<char>st;
        st.push(s[0]);
        exists[s[0]]=true;
        
        for(int i=1;i<s.length();i++){
            if(s[i]<=st.top()){
                if(exists[s[i]]==false){
                    while(!st.empty() && s[i]<st.top() && freq[st.top()]>1){
                        freq[st.top()]--;
                        exists[st.top()]=false;
                        st.pop();   
                    }
                    st.push(s[i]);
                    
                    exists[s[i]]=true;
                }
                else{
                    freq[s[i]]--;
                    
                    }
                }
            else{
                if(exists[s[i]]==false){
                    st.push(s[i]);
                    exists[s[i]]=true;
                    
                }
            }
            
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main(){
    string s="cbacdcbc";
    cout<<smallestSubsequence(s)<<endl;
    return 0;
}