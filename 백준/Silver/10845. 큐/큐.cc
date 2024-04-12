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

	int n;
	cin >> n;
	vector<int> v;
	while(n--) {
		string str;
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			v.push_back(x);
		}
		else if (str == "pop") {
			if(v.empty())
				cout << -1 << '\n';
			else {
				cout <<v.front() << '\n';
				v.erase(v.begin());
			}
		}
		else if (str == "size") {
			cout << v.size() << '\n';
		}
		else if (str == "empty") {
			if(v.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (str == "front") {
			if(v.empty())
				cout << -1 << '\n';
			else {
				cout << v.front() << '\n';
			}
		}
		else if (str == "back") {
			if(v.empty())
				cout << -1 << '\n';
			else {
				cout << v.back() << '\n';
			}
		}
	}
    return 0;
}



