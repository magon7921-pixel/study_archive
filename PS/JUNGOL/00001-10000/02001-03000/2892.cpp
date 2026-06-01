#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    vector<vector<long long>> dp(n - 1, vector<long long>(21));
    
    for (auto &i: v)
        cin >> i;

    dp[0][v[0]] = 1;

    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j <= 20; j++) {
            if (j - v[i] >= 0)
                dp[i][j] += dp[i - 1][j - v[i]];
            if (j + v[i] <= 20)
                dp[i][j] += dp[i - 1][j + v[i]];
        }
    }

    cout << dp[n - 2][v[n - 1]];

    return 0;
}