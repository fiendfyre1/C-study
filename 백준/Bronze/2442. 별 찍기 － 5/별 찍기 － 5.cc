#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i-1; j > 0; j--)
			cout << " ";
		for (int j = i; j < i+2*i+1; j++)
			cout << "*";
		cout << "\n";
	}
}