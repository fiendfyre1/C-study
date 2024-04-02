#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<stack>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	cin.sync_with_stdio(false);

	priority_queue<tuple<int, int>, vector<tuple<int, int>>, greater<>> pq;

	int n;
	cin >> n;
	vector<int> v;
	int count = 0;
	
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 0) {
			if (pq.empty()) {
				v.push_back(0);
			}
			else {
				v.push_back(get<1>(pq.top()));
				pq.pop();
			}
		}
		else {
			pq.push({ abs(x), x });
		}
	}
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
	return 0;
}



