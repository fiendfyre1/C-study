#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);

	int n;
	int count = 0;
	cin >> n;

	while (true) {
		int sum = (count*(count + 1)) / 2;
		int result = 6 * sum + 1;
		if (n <= result) {
			break;
		}
		else {
			count++;
		}
	}
	cout << count+1;
	return 0;
}
