#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    if (n == 4 || n == 7) {
        cout << -1;
        return 0;
    }

    int cnt = n / 5;
    switch (n % 5) {
    case 1:
        cnt = cnt - 1 + 2;
        break;
    case 2:
        cnt = cnt - 2 + 4;
        break;
    case 3:
        cnt += 1;
        break;
    case 4:
        cnt = cnt - 1 + 3;
        break;
    }
    cout << cnt;

    return 0;
}