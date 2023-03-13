#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        string s;
        cin >> s;

        stack<int> arr;
        bool flag = false;
        for (const auto& c : s) {
            if (c == '(') arr.push(1);
            else {
                if (arr.empty()) {
                    flag = true;
                    break;
                }
                arr.pop();
            }
        }
        if (!arr.empty() || flag) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}