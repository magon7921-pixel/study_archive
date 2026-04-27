#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        exit(0);
    }

    int trimmed = (int)round(n * 0.15);
    int sum = 0, cnt = 0;
    vector<int> v(n);

    for (auto &i : v)
        cin >> i;

    sort(v.begin(), v.end());

    for (int i = trimmed; i < n - trimmed; i++)
    {
        sum += v[i];
        cnt++;
    }

    cout << (int)round((double)sum / cnt);

    return 0;
}