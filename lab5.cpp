#include <iostream>
using namespace std;
int main(){

    double f = 1.0;
    int a;
    a = 1234;
    short B[] = {1,2,3,4};

    // cout << &a << endl;
    // cout << &f << endl;

    cout << &B+1 << " , " << sizeof(B) << endl;
    
    
    
    
    
    return 0;
}