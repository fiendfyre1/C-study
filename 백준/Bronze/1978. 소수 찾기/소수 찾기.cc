#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> A(n);
    int count = 0;
    for (int i = 0; i < A.size(); i++) {
        cin >> A[i];
        if (A[i] == 2) {
            count++;
        }
        
        else if (A[i] % 2 != 0 && A[i] > 2) { //홀수면서 2보다 큰 수
            bool is_prime = true;
            for (int x = 2; x <= sqrt(A[i]); x++) {
                if (A[i] % x == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}