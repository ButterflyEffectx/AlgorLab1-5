#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

const int n = 500;
int M[n][n] = {0};

int main(){

    int i,j;
    int ans = 0;
    auto t0 = high_resolution_clock::now();

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            ans += M[i][j];

    auto t1 = high_resolution_clock::now();
    cout << ans << endl;

    auto duration = duration_cast <microseconds> (t1 - t0);


    cout << duration.count() << endl;
    // cout << sizeof(M) << endl;
    // cout << M[100][100] << endl;

    return 0;
}