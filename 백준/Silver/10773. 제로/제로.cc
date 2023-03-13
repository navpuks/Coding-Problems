#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int k;
    cin >> k;

    stack<int> arr;
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        if (x == 0 && !arr.empty()) arr.pop();
        else arr.push(x);
    }

    int sum = 0;
    while (!arr.empty()) {
        sum += arr.top();
        arr.pop();
    }
    cout << sum;
}