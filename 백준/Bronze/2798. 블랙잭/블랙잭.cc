#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<queue>
#include<stack>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	deque<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

    sort(v.begin(), v.end()); // 배열 정렬

    int answer = 0;
    for (int i = 0; i < n - 2; i++) { // 첫 번째 수 선택
        int left = i + 1, right = n - 1; // 두 번째와 세 번째 수를 위한 포인터
        while (left < right) { // 두 포인터가 만나지 않을 때까지 반복
            int temp = v[i] + v[left] + v[right];
            if (temp <= m) { // m 이하인 경우
                if (temp > answer) {
                    answer = temp; // 가능한 최댓값 업데이트
                }
                left++; // 합을 증가시키기 위해 왼쪽 포인터 이동
            }
            else {
                right--; // 합을 감소시키기 위해 오른쪽 포인터 이동
            }
        }
    }

    cout << answer;
    return 0;
}



