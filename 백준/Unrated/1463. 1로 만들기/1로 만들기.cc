#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> arr(1'000'001, 0);
    arr[2] = 1;
    arr[3] = 1;
    for (int i = 4; i <= 1'000'000; ++i) {
        arr[i] = arr[i - 1] + 1;
        if (i % 3 == 0) {
            arr[i] = min(arr[i], arr[i / 3] + 1);
        }
        if (i % 2 == 0) {
            arr[i] = min(arr[i], arr[i / 2] + 1);
        }
    }

    cout << arr[n];

    return 0;
}