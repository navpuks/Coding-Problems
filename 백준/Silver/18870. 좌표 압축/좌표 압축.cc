#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct X {
    int x, i;
    bool operator<(X other) {
        return x < other.x;
    }
};

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<X> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].x;
        arr[i].i = i;
    }
    sort(begin(arr), end(arr));

    vector<int> compressed(n);
    int cnt = 0;
    bool same = false;
    compressed[arr[0].i] = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i].x != arr[i - 1].x) ++cnt;
        compressed[arr[i].i] = cnt;
    }

    for (const auto& x : compressed) cout << x << ' ';
    
    return 0;
}