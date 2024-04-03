#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	cin.sync_with_stdio(false);

	int A[9];

	for (int i = 0; i < 9; i++) {
		cin >> A[i];
	}

	sort(A, A + 9);

	int sum = 0;
	do {
		sum = 0;
		for (int i = 0; i < 7; i++) {
			sum += A[i];
		}
		if (sum == 100) {
			for (int i = 0; i < 7; i++) {
				cout << A[i] << "\n";
			}
			break;
		}
	} while (next_permutation(A, A + 9));


	return 0;
}



