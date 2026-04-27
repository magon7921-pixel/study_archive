#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, current_val, before_val;
    cin >> t;

    vector<int> dp;
    dp.reserve(t);

    dp.emplace_back(0);
    cin >> current_val;
    dp.emplace_back(current_val);
    cin >> current_val;
    before_val = current_val;
    dp.emplace_back(current_val + dp[1]);

    for (int i = 3; i <= t; i++) {
        cin >> current_val;

        if (before_val + dp[i - 3] > dp[i - 2]) {
            dp.emplace_back(before_val + dp[i - 3] + current_val);
        } else {
            dp.emplace_back(dp[i - 2] + current_val);
        }

        before_val = current_val;
    }

    cout << dp[t];

    return 0;
}