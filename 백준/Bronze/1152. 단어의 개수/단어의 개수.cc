#include<iostream>
#include<string>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);

    string str;
    int index = 0;
    bool inWord = false;

    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ' && !inWord) {
            index++;
            inWord = true;
        }
        else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << index << endl;

    return 0;
}
