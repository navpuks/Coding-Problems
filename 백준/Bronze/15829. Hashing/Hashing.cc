#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int l;
    string s;
    cin >> l >> s;

    const ll r = 31;
    const ll M = 1234567891;

    ll mult = 1;
    ll result = 0;
    for (const auto& c : s) {
        result += (c - 'a' + 1) * mult;
        result %= M;
        mult = (mult * r) % M;
    }

    cout << result;

    return 0;
}