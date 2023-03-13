#include <iostream>
#include <vector>
using namespace std;

struct X {
    int x, y;
    int Dist(X other) const {
        int dx = x - other.x;
        int dy = y - other.y;
        return dx * dx + dy * dy;
    }
};

struct C {
    X p;
    int r;
    bool Contains(X point) const {
        int d = p.Dist(point);
        return (d < r * r);
    }
};

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        X b, e;
        cin >> b.x >> b.y >> e.x >> e.y;

        int n;
        cin >> n;
        vector<C> arr(n);
        for (auto& [p, r] : arr) cin >> p.x >> p.y >> r;

        int cnt = 0;
        for (const auto& c : arr) {
            if (c.Contains(b)) {
                if (!c.Contains(e)) ++cnt;
            }
            else if (c.Contains(e)) ++cnt;
        }

        cout << cnt << '\n';
    }

    return 0;
}