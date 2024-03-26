#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);
    int T;
    cin >> T;
    vector<string> Array(T);
    for (int i = 0; i < T; i++) {
        int R;
        string S;
        cin >> R >> S;
        string P;
        for (char c:S) {
            P += string(R, c);
        }
        Array[i] = P;
    }
    for (int i = 0; i < T; i++) {
        cout << Array[i] << endl;
    }
    return 0;
}

