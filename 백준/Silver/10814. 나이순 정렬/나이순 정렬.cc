#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<tuple>
using namespace std;

int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(0);

	int n;
	cin >> n;
	vector<pair<int, string>> v;

	for (int i = 0; i < n; i++) {
		int first;
		string second;
		cin >> first >> second;
		v.push_back(make_pair(first, second));
	}

	stable_sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
		return a.first < b.first;
		});
		

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}



