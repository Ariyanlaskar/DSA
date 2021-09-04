#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double f = 13.14159;
    cout << fixed;
    cout << setprecision(3) << f << endl;
    return 0;
}