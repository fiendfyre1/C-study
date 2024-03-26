#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);
	double n;
	double max=0;
	double sum=0;
	cin >> n;
	vector<double> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		if (A[i] > max) {
			max=A[i];
		}
	}
	
	for(int i = 0; i < n; i++) {
		sum += A[i] / max * 100;
	}
	sum = sum / n;
	cout << sum;

	return 0;
}
