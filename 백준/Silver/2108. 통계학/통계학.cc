#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> arr(8001, 0);

int Mean() {
    double m = 0;
    for (int i = 0; i <= 8000; ++i) {
        m += (i - 4000) * arr[i];
    }
    m /= static_cast<double>(n);

    int M = static_cast<int>(m);
    if (m < 0) {
        if (M - m < 0.5) return M;
        return M - 1;
    }
    else {
        if (m - M < 0.5) return M;
        return M + 1;
    }
}

int Median() {
    int cnt = 0;
    int m = (n + 1) / 2;
    for (int i = 0; i <= 8000; ++i) {
        cnt += arr[i];
        if (cnt >= m) return i - 4000;
    }
    return 0;
}

int Mode() {
    int m = 0;
    for (int i = 0; i <= 8000; ++i) {
        if (arr[i] > arr[m]) m = i;
    }

    vector<int> modes;
    for (int i = 0; i <= 8000; ++i) {
        if (arr[i] == arr[m]) {
            modes.push_back(i - 4000);
        }
    }

    if (modes.size() == 1) return modes[0];
    return modes[1];
}

int Range() {
    int m, M;
    for (int i = 0; i <= 8000; ++i) {
        if (arr[i]) {
            m = i;
            break;
        }
    }
    for (int i = 8000; i >= 0; --i) {
        if (arr[i]) {
            M = i;
            break;
        }
    }
    return M - m;
}

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++arr[x + 4000];
    }

    cout << Mean() << '\n' << Median() << '\n' << Mode() << '\n' << Range();
    
    return 0;
}