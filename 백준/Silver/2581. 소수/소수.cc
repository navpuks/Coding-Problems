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

    int n, m;
    cin >> n >> m;

    int min_num = 10000;
    int sum = 0;
    for (int i = n; i <= m; ++i) {
        if (primes[i]) {
            if (i < min_num) min_num = i;
            sum += i;
        }
    }

    if (sum == 0) cout << -1;
    else {
        cout << sum << '\n' << min_num;
    }

    return 0;
}