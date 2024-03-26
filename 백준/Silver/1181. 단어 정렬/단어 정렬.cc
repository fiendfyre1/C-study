#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);

	int n;
	cin >> n;

	vector<string> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(), [](string& a, string& b) {
		if(a.size() != b.size()) {
			return a.size() < b.size();
		}
		return a < b;
		});

	v.erase(unique(v.begin(), v.end()), v.end());

	for (auto& s : v) {
		cout << s << '\n';
	}

	return 0;
}



