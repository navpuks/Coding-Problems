#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cin.tie(nullptr);   ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    vector<int> nums;
    vector<char> opers;

    string temp;
    for (const auto& c : s) {
        if (c == '+' || c == '-') {
            opers.push_back(c);
            nums.push_back(stoi(temp));
            temp.clear();
        }
        else temp += c;
    }
    nums.push_back(stoi(temp));

    bool minus = false;
    int result = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        if (minus) result -= nums[i];
        else {
            if (opers[i - 1] == '-') {
                minus = true;
                result -= nums[i];
            }
            else result += nums[i];
        }
    }
    cout << result;

    return 0;
}