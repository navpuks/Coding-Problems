#include <iostream>
using namespace std;

bool HasEnd(int n) {
    while (n > 100) {
        if (n % 1000 == 666) return true;
        n /= 10;
    }
    return false;
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int result = 666;
    for (int i = 1; i < n; ++i) {
        while (!HasEnd(++result)) { }
    }
    cout << result;

    return 0;
}