#include <iostream>
using namespace std;
int main(){

    int A = 0;
    int G = 0;
    int C = 0;
    int T = 0;

    string a;
    cin>>a;

    for (int i = 0; i < a.length(); i++){
        if (a[i] == 'A'){
            A += 1;
        }else if (a[i] == 'G'){
            G += 1;
        }else if (a[i] == 'C'){
            C += 1;
        }else{
            T += 1;
        }
    };

    char E[100];
    sprintf(E,"%d %d %d %d",A,C,G,T);
    cout << E << endl;


    

}