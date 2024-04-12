#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<queue>
#include<stack>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	int upf = 1;
	int dwf = 1;
	for (int i = 1; i <= k; i++) {
		dwf = dwf * i;
	}
	for (int i = n; i > n - k; i--) {
		upf = upf * i;
	}
	cout << upf / dwf;
    return 0;
}



