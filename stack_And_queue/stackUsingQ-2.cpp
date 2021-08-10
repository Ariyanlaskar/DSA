#include<iostream>
#include<queue>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int>q2;
    
    public:

    Stack(){
        N=0;
    }
    
    void pop(){
        if(q2.empty()){
            cout<<"Empty Stack"<<endl;
            return;
        }
        while(q2.size()!=1){
            q1.push(q2.front());
            q2.pop();
        }
        q2.pop();
        N--;

        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }
    void push(int x){
        q2.push(x);
        N++;
    }
    int top(){
        if(q2.empty()){
            return -1;
        }
        while(q2.size()!=1){
            q1.push(q2.front());
            q2.pop();

        }
        int ans=q2.front();
        q1.push(ans);

        queue<int>temp=q1;
        q1=q2;
        q2=temp;

        return ans;
        
    }
    int size(){
        return N;
    }
    

};

int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    // cout<<st.top()<<endl;
    // st.pop();

    cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
   

    return 0;
}