#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    unordered_map<int, int> arr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (arr.find(x) == end(arr)) arr.insert({x, 1});
        else ++arr[x];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        if (arr.find(x) == end(arr)) cout << "0 ";
        else cout << arr[x] << ' ';
    }
}