#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Gcd(int a, int b) {
    if (a % b == 0) return b;
    return Gcd(b, a % b);
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto& elt : arr) cin >> elt;
    sort(begin(arr), end(arr));

    int gcd = arr[1] - arr[0];
    for (int i = 2; i < n; ++i) {
        gcd = Gcd(gcd, arr[i] - arr[i - 1]);
    }

    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        cnt += ((arr[i] - arr[i - 1]) / gcd - 1);
    }
    cout << cnt;
    
    return 0;
}