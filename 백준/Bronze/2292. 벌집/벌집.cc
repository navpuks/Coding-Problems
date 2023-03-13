#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    --n;

    int r = 0;
    while (n > (r * r + r) * 3) {
        ++r;
    }
    cout << r + 1;

    return 0;
}