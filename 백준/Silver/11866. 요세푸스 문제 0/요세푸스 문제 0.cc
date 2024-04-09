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
	deque<int> a;
	vector<int> b;
	for (int i = 1; i <= n; i++) {
		a.push_back(i);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			int temp = a.front();
			a.pop_front();
			a.push_back(temp);
		}
		b.push_back(a.back());
		a.pop_back();
	}
	cout << "<";
	for (int i = 0; i < b.size() - 1; i++) {
		cout << b[i] << ", ";
	}
	cout << b[b.size() - 1];
	cout << ">";

	return 0;
}



