#include<iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);
    int n;
    char Array[100]{};
    int x=0;
    string input;
    cin >> n;
    cin >> input;
    for (int i = 0; i<n; i++) {
        Array[i] = input[i];
        x += Array[i]-'0';
    }
    
    cout << x << endl;
}
