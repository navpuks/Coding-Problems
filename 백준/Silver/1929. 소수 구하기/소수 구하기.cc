#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> Eratosthenes(int n) {
    vector<bool> primes(n + 1, true);
    primes[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (primes[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    auto primes = Eratosthenes(1'000'000);

    int n, m;
    cin >> n >> m;
    if (n > m) swap(n, m);

    for (int i = n; i <= m; ++i) {
        if (primes[i]) cout << i << '\n';
    }
    
    return 0;
}