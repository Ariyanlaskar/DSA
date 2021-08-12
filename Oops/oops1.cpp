#include<iostream>
using namespace std;
class A{
    public:
    
    void funcA(){
        cout<<"funcA"<<endl;
    }
    private:
    void funcB(){
        cout<<"funcB"<<endl;
    }
    protected:
    void funcC(){
        cout<<"funcC"<<endl;
    }
   

};

int main(){
    
    A obj ;
    obj.funcA();
    // obj.funcB(); cant call the function coz it is under private
    // obj.funcC(); cant call the function coz it is under private
    return 0;
}