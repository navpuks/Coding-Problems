#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    queue<int> arr;
    for (int i = 1; i <= n; ++i) arr.push(i);

    cout << '<';
    while (arr.size() != 1) {
        for (int i = 0; i < k - 1; ++i) {
            arr.push(arr.front());
            arr.pop();
        }

        cout << arr.front() << ", ";
        arr.pop();
    }
    cout << arr.front() << '>';

    return 0;
}