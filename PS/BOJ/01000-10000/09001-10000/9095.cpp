#include <iostream>

using namespace std;

int dp[11];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i < 11; i++) {
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }

    while (t--) {
        int n;
        cin >> n;
        cout << dp[n - 1] << '\n';
    }

    return 0;
}