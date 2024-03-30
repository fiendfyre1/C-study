#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    cin.tie(NULL);
	cout.tie(NULL);
    cin.sync_with_stdio(0);

	int n;
	cin >> n;

	int A[10001] = {};

    for (int i = 0;i < n;i++) {
        int in;
        cin >> in;
        A[in] += 1;
    }

    for (int i = 1; i < 10001;i++) {
        for (int j = 0; j < A[i];j++) {
            cout << i << '\n';
        }
    }

	return 0;
}



