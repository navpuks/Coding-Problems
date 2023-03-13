#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    if (a.size() < b.size()) swap(a, b);

    int n = a.size();
    int m = b.size();
    for (int i = 0; i < m - 1; ++i) {
        auto& now = a[n - 1 - i];
        now = (now - '0') + (b[m - 1 - i] - '0');
        if (now / 10) {
            now %= 10;
            a[n - 2 - i] += 1;
        }
    }
    a[n - m] = (a[n - m] - '0') + (b[0] - '0');

    if (n != m) {
        if (a[n - m] / 10) {
            ++a[n - m - 1];
            a[n - m] %= 10;
        }
        for (int i = m; i < n - 1; ++i) {
            auto& now = a[n - 1 - i];
            now -= '0';
            a[n - 2 - i] += now / 10;
            a[n - 1 - i] %= 10;
        }
        a[0] -= '0';
    }

    for (const auto& c : a) {
        cout << static_cast<int>(c);
    }

    return 0;
}