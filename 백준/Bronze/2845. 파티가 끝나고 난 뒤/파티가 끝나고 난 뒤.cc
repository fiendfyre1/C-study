#include<iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int l, p, a;

    cin >> l >> p;

    for(int i = 0; i < 5; i++) {
        cin >> a;
        cout << a-l*p << ' ';
    }
    cout  << '\n';
    
    return 0;
}