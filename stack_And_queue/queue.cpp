#include<iostream>
using namespace std;
# define n 100

class queue{

    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int x){
        if( back==n-1){
            cout<<" queue overflow"<<endl;
            return;
        }
        else{
            back++;
            arr[back]=x;
        }
        if(front==-1){
            front++;
        }
    }
    void dequeue(){
        if(front==-1 || front>back){
            cout<<"no element to pop"<<endl;
            return ;
        }
        else{
            front++;
        }
    }
    void peek(){
        if(front==-1 || front>back){
            cout<<"queue is empty"<<endl;
            return ;

        }
        else{
            cout<<arr[front]<<endl;
        }
    }
    bool empty(){
        return (front==-1 && back==-1 || front>back);
        
    }
};

int main(){
    queue q;
    q.enqueue(10);
    
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    cout<<q.empty()<<endl;
    
    


    return 0;
}