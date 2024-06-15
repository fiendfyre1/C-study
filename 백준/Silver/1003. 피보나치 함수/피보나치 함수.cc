#include<iostream>
#include<vector>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, Z[41] = { 1 }, O[41] = { 0, 1 };

    for(int n = 2; n <= 40; n++)
    {
        Z[n] = Z[n-1] + Z[n-2];
        O[n] = O[n-1] + O[n-2];
    }
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N;
        if(N ==0) {
            cout << 1 << ' ' << 0 << '\n';
        }
        else cout << Z[N] << ' ' << O[N] << '\n';
    }    
    return 0;
}