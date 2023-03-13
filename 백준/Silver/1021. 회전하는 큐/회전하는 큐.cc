#include <iostream>
#include <deque>
using namespace std;

deque<int> arr;

void Left() {
    arr.push_back(arr.front());
    arr.pop_front();
}

void Right() {
    arr.push_front(arr.back());
    arr.pop_back();
}

int CountLeft(int x) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == x) return i;
    }
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    arr = deque<int>(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }

    int cnt = 0;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;

        int l = CountLeft(x);
        int r = arr.size() - l;

        if (l < r) {
            for (int i = 0; i < l; ++i) Left();
            arr.pop_front();
            cnt += l;
        }
        else {
            for (int i = 0; i < r; ++i) Right();
            arr.pop_front();
            cnt += r;
        }
    }
    cout << cnt;

    return 0;
}