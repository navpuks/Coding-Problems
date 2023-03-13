#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> arr(10001, 0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++arr[x];
    }

    for (int x = 1; x <= 10000; ++x) {
        for (int i = 0; i < arr[x]; ++i) cout << x << '\n';
    }
    
    return 0;
}