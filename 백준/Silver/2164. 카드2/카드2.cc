#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<cmath>
#include<stack>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	cin.sync_with_stdio(false);

	int n;
	cin >> n;

	deque<int> dq;

	for (auto i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	while (dq.size() > 1) {
		dq.pop_front();
		dq.push_back(dq.front());
		dq.pop_front();
	}
	cout << dq.front();

	return 0;
}



