#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);

	vector<string> A;
	vector<string> B;

	string input;
	while (true) {
		cin >> input;
		if (input == "0") {
			break; // 0이 입력되면 반복문 종료
		}
		A.push_back(input); // 입력된 문자열을 벡터에 추가
		
	}

	for (int i = 0;i < A.size();i++) {
		string reversed_string = A[i];
		int len = A[i].size();
		for (int j = 0; j < len/2; j++) {
			swap(reversed_string[j], reversed_string[len - j - 1]);
		}
		B.push_back(reversed_string);
	}

	for (int i = 0; i < A.size(); i++) {
		if (A[i] == B[i]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	

	return 0;
}
