#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    deque<int> arr;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == "push_front") {
            int x;
            cin >> x;
            arr.push_front(x);
        }
        if (s == "push_back") {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        if (s == "pop_front") {
            if (arr.empty()) cout << "-1\n";
            else {
                cout << arr.front() << '\n';
                arr.pop_front();
            }
        }
        if (s == "pop_back") {
            if (arr.empty()) cout << "-1\n";
            else {
                cout << arr.back() << '\n';
                arr.pop_back();
            }
        }
        if (s == "size") {
            cout << arr.size() << '\n';
        }
        if (s == "empty") {
            cout << arr.empty() << '\n';
        }
        if (s == "front") {
            if (arr.empty()) cout << "-1\n";
            else cout << arr.front() << '\n';
        }
        if (s == "back") {
            if (arr.empty()) cout << "-1\n";
            else cout << arr.back() << '\n';
        }
    }
}