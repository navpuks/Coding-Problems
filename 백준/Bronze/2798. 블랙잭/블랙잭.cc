#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (auto& elt : arr) cin >> elt;

    int result = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum > m) continue;
                if (sum > result) result = sum;
            }
        }
    }
    cout << result;

    return 0;
}