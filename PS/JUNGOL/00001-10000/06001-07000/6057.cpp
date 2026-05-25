#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int P, N;
    int cmd, p, m;
    int result = 0;
    cin >> P >> N;
    vector<queue<int>> q(P);

    for (int i = 0; i < N; i++) {
        cin >> cmd;

        if (cmd == 0) {
            cin >> p >> m;
            q[p - 1].push(m);
        }
        else {
            cin >> p;
            if (!q[p - 1].empty()) {
                result += q[p - 1].front();
                q[p - 1].pop();
            }
        }
    }

    cout << result;

    return 0;
}