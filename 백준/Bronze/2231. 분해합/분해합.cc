#include <iostream>
using namespace std;

const int MAX = 1'000'000;

int generate(int n) {
    int sum = n;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    bool flag = false;
    for (int i = 1; i <= MAX; ++i) {
        int x = generate(i);
        if (x == n) {
            cout << i;
            flag = true;
            break;
        }
    }
    if (!flag) cout << 0;

    return 0;
}