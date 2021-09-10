// LeetCode Medium 990
#include<bits/stdc++.h>
using namespace std;
   vector<int>parent;
    vector<int>size;
    void make_par(char v){
        parent[v]=v;
    }
    char find_set(char v){
        if(parent[v]==v){
            return v;
        }
        return parent[v]=find_set(parent[v]);
    }
    void union_set(char a,char b){
        a=find_set(a);
        b=find_set(b);
        if(a!=b){
            if(size[a]<size[b]){
                swap(a,b);
            }
            parent[b]=a;
            size[a]+=size[b];
        }
    }
    bool equationsPossible(vector<string>& equations) {
        int n=equations.size();
        parent=vector<int>(20000);
        size=vector<int>(20000);
        
        
        for(char c='a';c<='z';c++){
            make_par(c);
        }
        for(auto letter:equations){
                
                char x=find_set(letter[0]);
                char y=find_set(letter[3]);
                if(letter[1]=='='){
                    // if(x!=y){
                        union_set(x,y);
                    // }
                }
            }
        for(auto letter:equations){
            char x=find_set(letter[0]);
            char y=find_set(letter[3]);
            if(letter[1]=='!'){
                if(x==y){
                    return 0;
                }
            }
        }
        return 1;
    }
    int main(){
        vector<string>equations= {"a==b","b!=a"};
        cout<<equationsPossible(equations);
        return 0;
    }