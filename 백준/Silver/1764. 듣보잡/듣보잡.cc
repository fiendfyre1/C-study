#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    vector<string> str1 = {};
    vector<string> str2 = {};
    
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        str1.push_back(temp);
    }

    sort(str1.begin(), str1.end());
    
    for(int i = 0; i < M; i++) {
        string temp;
        cin >> temp;
        if(binary_search(str1.begin(), str1.end(), temp)) {
            str2.push_back(temp);
        }
    }

    sort(str2.begin(), str2.end());
    cout << str2.size() << '\n';
    for(int i = 0; i< str2.size(); i++) {
        cout << str2[i] << '\n';
    }


    return 0;
}