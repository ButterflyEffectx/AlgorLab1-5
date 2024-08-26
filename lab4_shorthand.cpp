#include <iostream>
using namespace std;
int main(){

    int a = 11; 
    // a += 2;
    cout << a << endl;

    string ans = (a & 1)?"Odd" : "Even";
    // if( a % 2 == 0){
    //     ans = "Even";
    // }
    // else{
    //     ans = "Odd";
    // }
    cout << ans << endl;

    return 0;
}