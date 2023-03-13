#include <iostream>
#include <vector>
#include <algorithm>
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

    auto primes = Eratosthenes(1000);

    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (primes[x]) ++cnt;
    }
    cout << cnt;

    return 0;
}