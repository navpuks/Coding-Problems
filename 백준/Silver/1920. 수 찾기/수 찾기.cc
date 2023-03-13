#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    unordered_set<int> arr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr.insert(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        cout << (arr.find(x) != end(arr)) << '\n';
    }
}