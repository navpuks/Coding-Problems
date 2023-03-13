#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    while (true) {
        string s;
        getline(cin, s);
        if (s == ".") break;

        stack<int> arr;
        bool flag = false;
        for (const auto& c : s) {
            if (c == '(') arr.push(1);
            if (c == '[') arr.push(2);
            if (c == ')') {
                if (arr.empty() || arr.top() != 1) {
                    flag = true;
                    break;
                }
                arr.pop();
            }
            if (c == ']') {
                if (arr.empty() || arr.top() != 2) {
                    flag = true;
                    break;
                }
                arr.pop();
            }
        }
        if (!arr.empty() || flag) cout << "no\n";
        else cout << "yes\n";
    }

    return 0;
}