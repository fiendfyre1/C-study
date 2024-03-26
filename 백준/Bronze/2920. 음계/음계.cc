#include<iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(0);
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '1') {
			str[i] = 'c';
		}
		if (str[i] == '2') {
			str[i] = 'd';
		}
		if (str[i] == '3') {
			str[i] = 'e';
		}
		if (str[i] == '4') {
			str[i] = 'f';
		}
		if (str[i] == '5') {
			str[i] = 'g';
		}
		if (str[i] == '6') {
			str[i] = 'a';
		}
		if (str[i] == '7') {
			str[i] = 'b';
		}
		if (str[i] == '8') {
			str[i] = 'C';
		}
	}
	if (str == "c d e f g a b C") {
		cout << "ascending";
	}
	else if (str == "C b a g f e d c") {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
	

}