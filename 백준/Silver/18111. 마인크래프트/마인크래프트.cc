#include <iostream>
#include <vector>
using namespace std;
using V = vector<int>;
using M = vector<V>;

const int MAX = 500 * 500 * 256;

int Compute(const M& arr, int h, int b) {
    int times = 0;
    for (const auto& row : arr) {
        for (const auto& elt : row) {
            int diff = h - elt;
            b -= diff;
            if (diff > 0) times += diff;
            else times -= 2 * diff;
        }
    }

    if (b < 0) return MAX;
    return times;
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n, m, b;
    cin >> n >> m >> b;

    M arr(n, V(m));
    for (auto& row : arr) {
        for (auto& elt : row) cin >> elt;
    }

    int height = 0;
    int min_times = MAX;
    for (int h = 0; h <= 256; ++h) {
        int now = Compute(arr, h, b);
        if (now <= min_times) {
            height = h;
            min_times = now;
        }
    }
    cout << min_times << ' ' << height;

    return 0;
}