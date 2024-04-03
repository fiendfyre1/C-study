#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<cmath>
#include<queue>
#include<stack>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	cin.sync_with_stdio(false);

	int n;
	cin >> n;
	
	vector<pair<int, string>> v;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (v.empty()) {
			v.push_back(make_pair(1, str));
		}
		else
		{
			bool W = true;
			for (int j= 0; j < v.size(); j++) {
				if (str == v[j].second) {
					v[j].first++;
					W = false;
				}
			}
			if (W == true) {
				v.push_back(make_pair(1, str));
			}
		}
	}
	sort(v.begin(), v.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
		if (a.first != b.first) {
			return a.first > b.first;
		}
		else {
			return a.second < b.second;
		}
		});

	cout << v[0].second << "\n";

	return 0;
}



