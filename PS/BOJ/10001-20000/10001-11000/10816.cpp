#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, n2;
    cin >> n;
    vector<int> vec(n);

    for (auto &v: vec) cin >> v;

    sort(vec.begin(), vec.end());

    cin >> n2;

    for (int i = 0; i < n2; i++) {
        int num;

        cin >> num;
        cout << upper_bound(vec.begin(), vec.end(), num) - lower_bound(vec.begin(), vec.end(), num) << ' ';
    }

    return 0;
}