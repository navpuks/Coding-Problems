#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    queue<int> arr;
    for (int i = 1; i <= n; ++i) arr.push(i);

    while (arr.size() != 1) {
        arr.pop();
        arr.push(arr.front());
        arr.pop();
    }
    cout << arr.front();

    return 0;
}