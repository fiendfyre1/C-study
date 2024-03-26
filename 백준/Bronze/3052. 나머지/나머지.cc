#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);
    int Array[10]{ 0 };
    int Array2[10] = { - 1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int a = 10;
    for (int i = 0; i < 10; i++) {
        cin >> Array[i];
        Array[i] = Array[i] % 42;
    }
    for (int i = 0; i < 10; i++) {
            for (int j = i+1; j < 10; j++) {
                if (Array[i] == Array[j]) {
                    Array2[i] = Array[i];
                    a--;
                    break;
                }
        }
    }

    cout << a;
    return 0;
}
