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

	int n;
	string k;
	cin >> n >> k;
	int A[10] = {};
	int count = 0;
	int size = k.size();
	int intK = stoi(k);

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	sort(A, A + n, greater<int>());

	for (int i = 0; i < n; i++) {
		if (intK / A[i] > 0) {
			count += intK / A[i];
			intK = intK % A[i];
		}
	}
	
	cout << count << "\n";

	return 0;
}



