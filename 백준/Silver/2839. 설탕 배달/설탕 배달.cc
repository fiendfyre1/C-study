#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);

	int n;
	cin >> n;
	int count = 0;

	if (n % 5 == 0) {
		cout << n/5;
		return 0;
	}
	else {
		while (n > 0) {
			n -= 3;
			count++;
			if (n % 5 == 0) {
				cout << count + n / 5;
				return 0;
			}
			else if (n < 0) {
				cout << -1;
				return 0;
			}
		}
	}

	return 0;
}



