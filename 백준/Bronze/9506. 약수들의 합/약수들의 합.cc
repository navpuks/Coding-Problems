#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    while (true) {
        int n;
        cin >> n;
        if (n == -1) break;

        vector<int> divs;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                divs.push_back(i);
                int j = n / i;
                if (i != j) divs.push_back(j);
            }
        }
        sort(begin(divs), end(divs));

        int sum = 0;
        int l = divs.size() - 1;
        for (int i = 0; i < l; ++i) sum += divs[i];
        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < l - 1; ++i) {
                cout << divs[i] << " + ";
            }
            cout << divs[l - 1] << '\n';
        }
        else {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}