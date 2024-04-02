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

	int t;
	cin >> t;
	stack<char> s;
	vector<string> v;

	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') {
				s.push(str[j]);
			}
			else if (str[j] == ')') {
				if (s.empty()) {
					string temp = "NO";
					v.push_back(temp);
					break;
				}
				else {
					s.pop();
				}
			}
			if (j == str.size() - 1) {
				if (s.empty()) {
					string temp = "YES";
					v.push_back(temp);
				}
				else {
					string temp = "NO";
					v.push_back(temp);
				}
			}
		}
		while (!s.empty()) {
			s.pop();
		}
	}
	for (int k = 0;k < t;k++) {
		cout << v[k] << "\n";
	}

	return 0;
}



