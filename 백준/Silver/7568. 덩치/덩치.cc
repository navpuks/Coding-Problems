#include <iostream>
#include <vector>
using namespace std;

struct X {
    int h, w;
    bool operator<(X other) {
        return (h < other.h && w < other.w);
    }
};

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<X> arr(n);
    for (auto& [h, w] : arr) cin >> h >> w;

    vector<int> rank(n, 1);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i] < arr[j]) ++rank[i];
        }
    }

    for (const auto& elt : rank) cout << elt << ' ';

    return 0;
}