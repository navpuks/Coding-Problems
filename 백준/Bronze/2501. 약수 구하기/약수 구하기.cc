#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> divs;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) divs.push_back(n / i);
        }
    }
    sort(begin(divs), end(divs));

    if (divs.size() >= k) cout << divs[k - 1];
    else cout << 0;
}