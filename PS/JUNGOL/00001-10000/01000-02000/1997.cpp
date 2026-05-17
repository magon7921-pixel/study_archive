#include <iostream>

using namespace std;

int dp[31];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int day, n;

    cin >> day >> n;

    dp[2] = 1;

    for (int i = 3; i <= day; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    for (int i = 1; i <= n; i++) {
        if ((n - i * dp[day - 1]) % dp[day] == 0) {
            cout << i << '\n' << (n - i * dp[day - 1]) / dp[day];
            exit(0);
        }
    }

    return 0;
}