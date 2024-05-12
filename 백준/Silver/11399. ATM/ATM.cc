#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int sum = 0;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        sum+=v[i]*(n-i);
    }

    cout << sum << '\n';
    return 0;
}