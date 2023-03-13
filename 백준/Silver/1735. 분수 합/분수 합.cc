#include <iostream>
using namespace std;
using ll = long long;

ll Gcd(ll a, ll b) {
    if (a % b == 0) return b;
    return Gcd(b, a % b);
}

ll Lcm(ll a, ll b) {
    return a / Gcd(a, b) * b;
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    ll den = b * d;
    ll num = a * d + b * c;
    ll gcd = Gcd(den, num);
    cout << num / gcd << ' ' << den / gcd;
    
    return 0;
}