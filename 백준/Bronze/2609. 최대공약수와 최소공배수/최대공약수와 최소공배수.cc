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

	int n, m;
	cin >> n >> m;
	vector<int> divisors1;
	vector<int> divisors2;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			divisors1.push_back(i);
		}
	}
	for (int i = 1; i <= m; i++) {
		if (m % i == 0) {
			divisors2.push_back(i);
		}
	}
	int min_divisor = 1;
	for (int i = 0; i < divisors1.size(); i++) {
		for (int j = 0; j < divisors2.size(); j++) {
			if (divisors1[i] == divisors2[j]) {
				min_divisor = divisors1[i];
				break;
			}
		}
	}
	cout << min_divisor << "\n" << min_divisor*(n/min_divisor)*(m/min_divisor) << "\n";
    return 0;
}




