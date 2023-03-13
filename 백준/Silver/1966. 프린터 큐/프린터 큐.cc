#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

struct X {
    int w, i;
    bool operator<(X other) {
        return w < other.w;
    }
};

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int n, m;
        cin >> n >> m;

        deque<X> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i].w;
            arr[i].i = i;
        }

        int cnt = 0;
        while (true) {
            int M = max_element(begin(arr), end(arr))->w;
            if (begin(arr)->w == M) {
                if (begin(arr)->i == m) {
                    cout << ++cnt << '\n';
                    break;
                }
                arr.pop_front();
                ++cnt;
            }
            else {
                arr.push_back(arr.front());
                arr.pop_front();
            }
        }
    }

    return 0;
}