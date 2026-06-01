#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> pos;
    vector<pair<long long, long long>> v;
    int n;

    cin >> n;

    pos.resize(n);
    v.reserve(n * n);

    for (int i = 0; i < n; i++)
        cin >> pos[i].first >> pos[i].second;

    for (const auto &i: pos) {
        for (const auto &j: pos)
            v.emplace_back((long long)i.first + j.first, (long long)i.second + j.second);
    }

    sort(v.begin(), v.end());

    int max_cnt = 0;
    int cur_cnt = 1;
    
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1])
            ++cur_cnt;
        else {
            max_cnt = (max_cnt > cur_cnt ? max_cnt : cur_cnt);
            cur_cnt = 1;
        }
    }

    max_cnt = (max_cnt > cur_cnt ? max_cnt : cur_cnt);

    cout << max_cnt;

    return 0;
}