#include <iostream>
#include <vector>
using namespace std;

struct X {
    int zero, one;
    X operator+(X other) {
        return X{zero + other.zero, one + other.one};
    }
};

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    vector<X> arr(41);
    arr[0] = X{1, 0};
    arr[1] = X{0, 1};
    for (int i = 2; i <= 40; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int n;
        cin >> n;
        cout << arr[n].zero << ' ' << arr[n].one << '\n';
    }

    return 0;
}