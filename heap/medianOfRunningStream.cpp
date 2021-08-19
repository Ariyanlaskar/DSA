#include<bits/stdc++.h>
using namespace std;
priority_queue<int ,vector<int>>maxh;
priority_queue<int ,vector<int>,greater<int>>minh;
void insert(int x){
    if(maxh.size()==minh.size()){
        if(maxh.empty()){
            maxh.push(x);
            return;
        }
        if(x<maxh.top()){
            maxh.push(x);
        }
        else{
            minh.push(x);
        }
    }
    else{
        if(maxh.size()>minh.size()){
            if(x>=maxh.top()){
                minh.push(x);
            }
            else{
                int temp=maxh.top();
                maxh.pop();
                minh.push(temp);
                maxh.push(x);
            }
        }
        else{
            if(x<=minh.top()){
                maxh.push(x);
            }
            else{
                int temp=minh.top();
                minh.pop();
                maxh.push(temp);
                minh.push(x);
            }
        }
    }
}
double medianfinder(){
    if(maxh.size()==minh.size()){
        return (maxh.top()+minh.top())/2.0;
    }
    else if(maxh.size()>minh.size()){
        return maxh.top();
    }
    else{
        return minh.top();
    }
}
int main(){
    insert(10);
    cout<<medianfinder()<<endl;
    insert(15);
    cout<<medianfinder()<<endl;
    insert(21);
    cout<<medianfinder()<<endl;
    insert(30);
    cout<<medianfinder()<<endl;
    insert(18);
    cout<<medianfinder()<<endl;
    insert(19);
    cout<<medianfinder()<<endl;

    return 0;
}