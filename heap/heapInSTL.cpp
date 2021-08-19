// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>>pq;
    pq.push(1);
    pq.push(5);
    pq.push(8);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    cout<<"*****************************************"<<endl;
    priority_queue<int,vector<int>,greater<int>>pqm;
    pqm.push(10);
    pqm.push(5);
    pqm.push(99);
    pqm.push(1);
    cout<<pqm.top()<<endl;;
    pqm.pop();
    cout<<pqm.top();
    return 0;
}