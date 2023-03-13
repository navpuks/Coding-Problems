#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    string result;
    stack<int> temp;
    int top = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (temp.empty()) {
            temp.push(++top);
            result += '+';
        }
        while (top < x) {
            temp.push(++top);
            result += '+';
        }
        
        if (temp.empty() || temp.top() > x) {
            result = "";
            break;
        }
        else {
            temp.pop();
            result += '-';
        }
    }

    if  (result.empty()) cout << "NO";
    else {
        for (const auto& c : result) cout << c << '\n';
    }

    return 0;
}