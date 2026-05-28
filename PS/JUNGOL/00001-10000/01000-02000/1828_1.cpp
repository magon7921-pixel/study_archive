#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int low, high;
    int result = 0;
    vector<pair<int, int>> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> low >> high;
        v.emplace_back(low, high);
    }

    sort(v.begin(), v.end());

    low = -280, high = -280;

    for (const auto &i: v) {
        if (i.first > high) {
            result++;
            low = i.first;
            high = i.second;
        }
        else if (i.second < high)
            high = i.second;
        else if (i.first > low)
            low = i.first;
    }

    cout << result;

    return 0;
}