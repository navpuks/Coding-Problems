#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    int k;
    cin >> k;

    vector<int> idx(6);
    vector<int> length(6);
    for (int i = 0; i < 6; ++i) {
        cin >> idx[i] >> length[i];
    }

    int sub_idx;
    for (int i = 0; i < 6; ++i) {
        int j = (i + 1) % 6;
        if (idx[i] == idx[(i + 2) % 6] && idx[(i + 1) % 6] == idx[(i + 3) % 6]) {
            sub_idx = (i + 1) % 6;
        }
    }

    int sub_area = length[sub_idx] * length[(sub_idx + 1) % 6];
    int total_area = length[(sub_idx + 3) % 6] * length[(sub_idx + 4) % 6];
    cout << k * (total_area - sub_area);

    return 0;
}