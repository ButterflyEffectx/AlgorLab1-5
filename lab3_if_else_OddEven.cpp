#include<iostream>
using namespace std;
int main(){
    int a = 100;
    if(a & 1)// if(a % 2 == 1)
        cout << "Odd" ;
    else
        cout << "Even";


    return 0;
}