#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    int value;
    int result = 0;

    cin >> r >> c;

    int max_n = r + c - 1;

    vector<unordered_map<int, int>> v(((max_n + 1) / 2) + 1);

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> value;

            int n = i + j - 1;

            if (n <= (max_n + 1) / 2)
                v[n][value]++;
            else
                v[max_n - n + 1][value]++;
        }
    }

    for (int i = 1; i <= (max_n + 1) / 2; i++) {
        int max = 0, cnt = 0;

        for (const auto &j: v[i]) {
            if (max < j.second)
                max = j.second;
            cnt += j.second;
        }

        result += cnt - max;
    }

    cout << result;

    return 0;
}
    