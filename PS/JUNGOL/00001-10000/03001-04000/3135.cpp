#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    int l, r;

    cin >> N;

    vector<long long> v (N + 1), s (N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> v[i];
        s[i] = s[i - 1] + v[i];
    }

    cin >> Q;

    for (int i = 1; i <= Q; i++) {
        cin >> l >> r;
        cout << s[r] - s[l - 1] << '\n';
    }

    return 0;
}
