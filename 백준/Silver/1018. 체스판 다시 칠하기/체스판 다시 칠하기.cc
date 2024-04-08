#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<queue>
#include<stack>
using namespace std;


int chess(vector<vector<char>>& board, int x, int y) {
	int repaintCount = 0;
	int repaintCount2 = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == 0) {
				if (board[i][j] != 'W') {
					repaintCount++;
				}
				if (board[i][j] != 'B') {
					repaintCount2++;
				}
			}
			else {
				if (board[i][j] != 'B') {
					repaintCount++;
				}
				if (board[i][j] != 'W') {
					repaintCount2++;
				}
			}
		}
	}

	return min(repaintCount, repaintCount2);
}

int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<vector<char>> v(n, vector<char>(m));

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < m; j++) {
			v[i][j] = str[j];
		}
	}

	vector<int> index;

	for (int i = 0; i <= n-8; i++) {
		for (int j = 0; j <= m-8; j++) {
			index.push_back(chess(v, i, j));
		}
	}

	sort(index.begin(), index.end());
	cout << index[0] << '\n';

	return 0;
}



