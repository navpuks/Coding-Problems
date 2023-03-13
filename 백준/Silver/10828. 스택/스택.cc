#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    stack<int> arr;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == "push") {
            int x;
            cin >> x;
            arr.push(x);
        }
        if (s == "pop") {
            if (arr.empty()) cout << "-1\n";
            else {
                cout << arr.top() << '\n';
                arr.pop();
            }
        }
        if (s == "size") {
            cout << arr.size() << '\n';
        }
        if (s == "empty") {
            cout << arr.empty() << '\n';
        }
        if (s == "top") {
            if (arr.empty()) cout << "-1\n";
            else cout << arr.top() << '\n';
        }
    }
}