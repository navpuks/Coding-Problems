#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        bool flag = false;
        vector<bool> check(26, false);
        check[s[0] - 'a'] = true;
        for (int i = 1; i < s.size(); ++i) {
            int now = s[i] - 'a';
            if (check[now]) {
                if (s[i] != s[i - 1]) {
                    flag = true;
                    break;
                }
            }
            else check[now] = true;
        }
        if (!flag) ++cnt;
    }
    cout << cnt;

    return 0;
}