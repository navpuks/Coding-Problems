#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto& elt : arr) cin >> elt;
    sort(begin(arr), end(arr));

    int sum = 0, now = 0;
    for (const auto& elt : arr) {
        now += elt;
        sum += now;
    }
    cout << sum;

    return 0;
}