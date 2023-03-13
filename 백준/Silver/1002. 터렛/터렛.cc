#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int a, b, c, x, y, r;
        cin >> a >> b >> c >> x >> y >> r;

        int dx = a - x;
        int dy = b - y;
        int dr = c - r;
        int ar = c + r;
        dx *= dx;
        dy *= dy;
        dr *= dr;
        ar *= ar;

        if (dx == 0 && dy == 0 && dr == 0) cout << -1;
        else if (dx + dy > ar) cout << 0;
        else if (dx + dy == ar) cout << 1;
        else if (dx + dy < ar && dx + dy > dr) cout << 2;
        else if (dx + dy == dr) cout << 1;
        else cout << 0;
        cout << '\n';
    }

    return 0;
}