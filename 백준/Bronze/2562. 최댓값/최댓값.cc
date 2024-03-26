#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(0);
	int Array[9];
	int max = 0;
	for (int i = 0;i < 9;i++) {
		cin >> Array[i];
	}
	for (int i = 0;i < 9;i++) {
		if (Array[i] > Array[max]) {
			max = i;
		}
	}
	cout << Array[max] << endl << max + 1 << endl;
}