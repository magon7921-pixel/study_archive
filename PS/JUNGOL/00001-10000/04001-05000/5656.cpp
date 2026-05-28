#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long result = 0;
    string line;

    cin >> n >> line;

    vector<long long> s(n+1, 0);
    map<long long, long long> m;

    for (int i = 0; i <= n; i++) {
        long long cur = line[i - 1] - '0' + s[i - 1] - 1;
        s[i] = cur;

        if (m.count(cur))
            result += m[cur];

        m[cur]++;
    }

    cout << result;

    return 0;
}
