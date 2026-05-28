#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long result = 0;

    cin >> n;

    vector<long long> v(n+1, 0), s(n+1, 0);
    map<long long, long long> m;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        s[i] = v[i] + s[i - 1];
    }

    for (int i = 0; i <= n; i++) {
        if (m.count(s[i]) == 0)
            m[s[i]] = 1;
        else 
            m[s[i]]++;
    }

    for (const auto &i: m)
        result += (i.second * (i.second - 1)) / 2;

    cout << result;

    return 0;
}
