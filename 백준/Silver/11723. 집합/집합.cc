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

	int m;
	cin >> m;
	int s[20] = { 0, };

	while (m--) {
		string str;
		cin >> str;
		if (str == "add") {
			int k;
			cin >> k;
			s[k-1] = k;
		}
		else if (str == "remove") {
			int k;
			cin >> k;
			if (s[k-1] == k) {
				s[k-1] = 0;
			}
		}
		else if (str == "check") {
			int k;
			cin >> k;
			if (s[k-1] == k) {
				cout << 1 << "\n";
			}
			else
				cout << 0 << "\n";
		}
		else if (str == "toggle") {
			int k;
			cin >> k;
			if (s[k-1] == k) {
				s[k-1] = 0;
			}
			else
				s[k-1] = k;
		}
		else if (str == "all") {
			for(int i=0; i<20; i++)
				s[i] = i+1;
		}
		else if (str == "empty") {
			for(int i=0; i<20; i++)
				s[i] = 0;
		}
	}
	
    return 0;
}



