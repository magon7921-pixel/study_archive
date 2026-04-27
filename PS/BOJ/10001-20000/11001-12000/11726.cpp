#include <iostream>

using namespace std;

int dp[1001];

int main() {
    int t;
    cin >> t;

    dp[0] = 1;
    dp[1] = 2;

    for (int i = 2; i < t; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;

    cout << dp[t - 1];

    return 0;
}