#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<queue>
#include<stack>
using namespace std;


int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	int n, m;
	int N[1000000] = {0,};
	int M[1000000] = {0,};

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> N[i];
		
	}
	sort(N, N + n);
	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> M[i];
	}

	for (int i = 0; i < m; i++) {
		int left = 0;
		int right = n - 1;
		int mid;
		bool flag = false;

		while (left <= right) {
			mid = (left + right) / 2;

			if (N[mid] == M[i]) {
				flag = true;
				break;
			}
			else if (N[mid] < M[i]) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}

		if (flag) {
			cout << 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}

	return 0;
}



