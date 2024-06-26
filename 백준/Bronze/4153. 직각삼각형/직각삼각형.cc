#include<iostream>
#include<vector>
using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(0);
    vector<int> numbers;
    
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        numbers.push_back(a);
        numbers.push_back(b);
        numbers.push_back(c);
    }
    
    for (int i = 0; i < numbers.size(); i += 3) {
        int a = numbers[i];
        int b = numbers[i + 1];
        int c = numbers[i + 2];
        
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            cout << "right\n";
        } else {
            cout << "wrong\n";
        }
    }
    
    return 0;
}
