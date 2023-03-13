#include <iostream>
using namespace std;

int Gcd(int a, int b) {
    if (a % b == 0) return b;
    return Gcd(b, a % b);
}

int Lcm(int a, int b) {
    return a / Gcd(a, b) * b;
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int a, b;
        cin >> a >> b;
        cout << Lcm(a, b) << '\n';
    }
    
    return 0;
}