#include<iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;

    cin >> n >> str;

    for(int i = 5; i > 0; i--) {
        cout << str[n-i];
    }
    cout << '\n';
    
    return 0;
}