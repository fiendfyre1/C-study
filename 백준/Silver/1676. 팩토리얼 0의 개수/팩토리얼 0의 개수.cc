#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);

	int n;
	int count = 0;
	cin >> n;


	for (int i = 5; i <= n; i *= 5) {
		count += n/i;
	} // 5의 배수의 개수를 세는 것이므로 5로 나누어 떨어지는 수의 개수를 세는 것과 같다.

	cout << count;

	return 0;
}



