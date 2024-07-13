#include<iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;
        if((n+1)%(n%100) == 0) {
            cout << "Good\n";
        }
        else cout << "Bye\n";
    }
    
    return 0;
}