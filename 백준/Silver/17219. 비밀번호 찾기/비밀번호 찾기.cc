#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<map>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    string str1, str2;
    map<string, string> mp;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> str1 >> str2;
        mp[str1] = str2;
    }
    
    for(int i = 0; i < m; i++) {
        cin >> str1;
        auto item = mp.find(str1);
        cout << item -> second << '\n';
    }

    return 0;
}