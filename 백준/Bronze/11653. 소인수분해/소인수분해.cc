#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int i = 2;
    while (n != 1) {
        if (n % i == 0) {
            cout << i << '\n';
            n /= i;
        }
        else ++i;
    }

    return 0;
}