#include<iostream>
#include<vector>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);
    int Test_Data;
    cin >> Test_Data;
    int H, W, n;
    vector<int> Array(Test_Data, 0);
    for (int i = 0; i < Test_Data;i++) {

        cin >> H >> W >> n;

        int f = (n - 1) % H + 1;
        int r = (n - 1) / H + 1;
        Array[i] = 100 * f + r;

    }
    for (int i = 0; i < Test_Data; i++) {
        cout << Array[i] << endl;
    }
    return 0;
}
