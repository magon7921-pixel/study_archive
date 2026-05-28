#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    int sr, sc, er, ec;

    cin >> N;

    vector<vector<long long>> v(N+1, vector<long long>(N+1, 0));
    vector<vector<long long>> s(N+1, vector<long long>(N+1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> v[i][j];
            s[i][j] = v[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
        }
    }

    cin >> Q;

    for (int i = 1; i <= Q; i++) {
        cin >> sr >> sc >> er >> ec;
        cout << s[er][ec] - s[sr - 1][ec] - s[er][sc - 1] + s[sr - 1][sc - 1] << '\n';
    }

    return 0;
}
