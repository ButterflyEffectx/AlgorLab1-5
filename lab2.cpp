#include<iostream>
using namespace std;
int main()
{
    int A[5];
    A[0]=123;
    cout << A[0] << endl;
    char B[6];char C[] = "Hello\0 World";
    string D = "Hello World";
    B[0] = 'H'; B[1] = 'E'; B[2] = 'L'; B[3] = 'L'; B[4] = 'O';
    cout << B << endl;
    cout << sizeof(C)<< " " << (int)C[5] << &C[6] << endl; 
    cout << D.length() << endl;
    char E[1000];
    sprintf(E, "Hello C String %s %s",C, D.c_str());
    cout << sizeof(E) << E << endl;

     return 0;
} // namespace std;
