#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> m;
    int n;
    int start, len;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> start >> len;

        if (m.count(start) == 1)
            len = (m[start] < len ? m[start] : len);

        m[start] = len;
    }

    int end = 0, result = 0;

    for (const auto &i: m) {
        if (i.first >= end) {
            end = i.first + i.second;
            ++result;
        }
        else if (i.first + i.second < end)
            end = i.first + i.second;
    }

    cout << result;

    return 0;
}
