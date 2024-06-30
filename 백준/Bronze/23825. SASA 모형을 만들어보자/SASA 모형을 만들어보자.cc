#include<iostream>
#include<vector>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    if(x > y) {
        cout << y/2 << '\n';
    }
    else cout << x/2 << '\n';

    
    return 0;
}