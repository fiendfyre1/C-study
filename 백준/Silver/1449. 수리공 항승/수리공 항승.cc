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

	vector<int> v;
	int n;
	int l;
	int count = 0;
	cin >> n >> l;
	
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	while (!v.empty()) {
		int a = v.front();
		v.erase(v.begin());
		if (v.empty()) {
			count++;
			break;
		}
		int b = v.front();
		if (b - a == l - 1) {
			v.erase(v.begin());
			count++;
		}
		else if (b - a < l - 1) {
			v.erase(v.begin());
			v.push_back(a);
			sort(v.begin(), v.end());
		}
		else {
			count++;
		}
	}
	
	cout << count << '\n';
	return 0;
}



