#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);
    string str;
    getline(cin, str);
    for (int i = 0; i < 26;i++) {
        char ch = 'a' +i;
        bool found = false;
        for (int j = 0;j < str.length();j++) {
            if (str[j] == ch) {
                cout << j << " ";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "-1" << " ";
        }
    }

}
