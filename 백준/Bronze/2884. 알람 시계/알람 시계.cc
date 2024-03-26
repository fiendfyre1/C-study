#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);
    int H;
    int M;
    cin >> H >> M;
    if (M >= 45) {
        cout << H <<" "<< M - 45 << endl;
    }
    else if (H == 0&&M<45) {
        cout << 23 << " " << M + 15 << endl;
    }
    else {
        cout << H - 1 <<" " << M + 15 << endl;
    }
    return 0;
}
