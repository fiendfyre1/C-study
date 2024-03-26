#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    int* Array = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> Array[i];
    }

    int max= Array[0];
    int min = Array[0];

    for (int i = 0; i < n; i++) {
        if (Array[i] >= max) {
            max = Array[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (Array[i] <= min) {
            min = Array[i];
        }
    }
    cout << min << " " << max << endl;
    delete[] Array;
    return 0;
}
