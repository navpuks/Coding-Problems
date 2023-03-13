#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int dx = min(x, w - x);
    int dy = min(y, h - y);
    cout << min(dx, dy);
    
    return 0;
}