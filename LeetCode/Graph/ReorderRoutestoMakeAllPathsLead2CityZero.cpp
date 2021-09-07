 #include<bits/stdc++.h>
 using namespace std;
    vector<int>parent;
    vector<int>size;
    void make_set(int v){
        parent[v]=v;
        size[v]=0;
    }
    int find_par(int v){
        if(parent[v]==v){
            return v;
        }
        return parent[v]=find_par(parent[v]);
    }
    void union_set(int a,int b){
        a=find_par(a);
        b=find_par(b);
        if(size[a] >= size[b]){
            parent[b] = a;
            size[a]++;
        }
        else{
            parent[a]= b;
            size[b]++;
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
    parent=vector<int>(n);
    size=vector<int>(n);
    for(int i=0;i<n;i++){
        make_set(i);
    }
    for(int i=0;i<connections.size();i++){
        if(connections[i][1]==0){
            union_set(connections[i][1],connections[i][0]);
        }
    }
    int count=0;
        while(size[0]<=n-1){
            for(int i=0;i<connections.size();i++){
                if(find_par(connections[i][1])==0){
                    union_set(connections[i][1],connections[i][0]);
                }
                else if(find_par(connections[i][0])==0){
                    count++;
                    union_set(connections[i][0],connections[i][1]);
                }
            }
        }
        return count;
    }
    int main(){
        int n=6;
        vector<vector<int>>connections={{0,1},{1,3},{2,3},{4,0},{4,5}};
        cout<<minReorder(n,connections);
        return 0;
    }