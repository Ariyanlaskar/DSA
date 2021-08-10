#include<iostream>
using namespace std;

# define n 100
class stack{
    int* arr;
    int top;
    
    public:

    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"stack overflow"<<endl;
            return ;
        }
        else{
            top++;
            arr[top]=x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return ;
        }
        else{
            top--;
        }
    }
    int Top(){
        if(top==-1){
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};

int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;


    return 0;
}