#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);

	int n;
	cin >> n;
	int x, y;
	vector<pair<int, int>> A;

	
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		A.push_back({ x, y });
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < n;i++) {
		cout << A[i].first << ' ' << A[i].second << '\n';
	}

	return 0;
}



