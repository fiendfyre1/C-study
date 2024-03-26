#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = n - i; j > 0; j--)
			cout << "*";
		
		cout << "\n";
	}
}