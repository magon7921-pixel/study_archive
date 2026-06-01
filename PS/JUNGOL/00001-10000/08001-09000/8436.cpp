#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, max = 0;
    long long result = 0;

    cin >> n;

    vector<long long> v(n);

    for (auto &i: v) {
        cin >> i;

        if (i > max)
            max = i;
    }

    long long block_cnt = 0;
    bool is_max = true;

    for (auto &i: v) {
        if (is_max && i != max) {
            block_cnt++;
            is_max = false;
        }
        else if (!is_max && i == max)
            is_max = true;

        result += max - i;
    }

    if (block_cnt > 1)
        result += n;

    cout << result;

    return 0;
}
    