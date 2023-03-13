#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        string s;
        cin >> s;

        int n;
        cin >> n;
        deque<int> arr(n);

        char temp;
        cin >> temp;
        if (n == 0) cin >> temp;
        else {
            for (auto& elt : arr) cin >> elt >> temp;
        }

        bool flag = false;
        bool reversed = false;
        for (const auto& c : s) {
            if (c == 'R') reversed = !reversed;
            else {
                if (arr.empty()) {
                    flag = true;
                    break;
                }

                if (reversed) arr.pop_back();
                else arr.pop_front();
            }
        }

        if (flag) cout << "error\n";
        else if (arr.empty()) cout << "[]\n";
        else {
            n = arr.size();
            cout << '[';
            for (int i = 0; i < n - 1; ++i) {
                if (reversed) cout << arr[n - 1 - i] << ',';
                else cout << arr[i] << ',';
            }
            if (reversed) cout << arr.front() << "]\n";
            else cout << arr.back() << "]\n";
        }
    }

    return 0;
}