#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<deque>
using namespace std;



int main() {
    cin.tie(NULL);
	cout.tie(NULL);
    cin.sync_with_stdio(false);

	int n;
	cin >> n;
	deque<int> v;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push_front") {
			int x;
			cin >> x;
			v.push_front(x);
		}
		else if (s == "push_back") {
			int x;
			cin >> x;
			v.push_back(x);
		}
		else if (s == "pop_front") {
			if (v.empty() ==1)
			{
				cout << -1 << "\n";
			}
			else 
			{
				cout << v.front() << "\n";
				v.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (v.empty()==1)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << v.back() << "\n";
				v.pop_back();
			}
		}
		else if (s == "size") {
			cout << v.size() << "\n";
		}
		else if (s == "empty") {
			cout << v.empty() << "\n";
		}
		else if (s == "front") {
			if (v.empty() == 1) {
				cout << -1 << "\n";
			}
			else
				cout << v.front() << "\n";
		}
		else if (s == "back") {
			if (v.empty() == 1)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << v[v.size() - 1] << "\n";
			}
		}
	}	
	

	return 0;
}



