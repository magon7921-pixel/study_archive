#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, num;
    long long cnt = 0;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) cnt += v[i] * (n - i);

    cout << cnt;

    return 0;
}