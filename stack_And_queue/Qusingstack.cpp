#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int>st1;
    
    public:

    
    void enqueue(int x){
        st1.push(x);
    }
    int dequeue(){
        if(st1.empty()){
            cout<<"Empty Stack!!!!!"<<endl;
            return 0;
            
        }
        int x=st1.top();
        st1.pop();
        if(st1.empty()){
            return x;
        }
        int item=dequeue();
        st1.push(x);
        
        return item;


        
            
        
        int peek=st1.top();
        st1.pop();
        return peek;
    }
    bool empty(){
        return st1.empty();
    }
    
};

int main(){

    queue q;
    q.enqueue(100);
    
    q.enqueue(200);
    q.enqueue(300);
    q.enqueue(400);
    q.enqueue(500);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}