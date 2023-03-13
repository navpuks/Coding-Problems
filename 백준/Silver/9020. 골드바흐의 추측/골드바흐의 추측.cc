#include <iostream>
#include <vector>
using namespace std;

vector<bool> Eratosthenes(int n) {
    vector<bool> primes(n + 1, true);
    primes[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (primes[i]) {
            for (int j = i * 2; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    auto primes = Eratosthenes(10000);

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int n;
        cin >> n;
        for (int i = n / 2; i > 1; --i) {
            if (primes[i] && primes[n - i]) {
                cout << i << ' ' << n - i << '\n';
                break;
            }
        }
    }

    return 0;
}