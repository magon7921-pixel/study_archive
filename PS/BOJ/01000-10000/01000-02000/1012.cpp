#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using matrix = vector<vector<bool>>;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};


void bfs(matrix &v, int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});

    int m = v.size();
    int n = v[0].size();

    v[x][y] = false;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                continue;
                    
            if (v[nx][ny]) {
                q.push({nx, ny});
                v[nx][ny] = false;
            }
        }

        q.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int m, n, k;
        int cnt = 0;
        cin >> m >> n >> k;
        matrix v(m, vector<bool>(n, false));

        for (int j = 0; j < k; j++) {
            int x, y;
            cin >> x >> y;
            v[x][y] = true;
        }

        for (int x = 0; x < m; x++) {
            for (int y = 0; y < n; y++) {
                if (v[x][y]) {
                    bfs(v, x, y);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}

// dfs bfs할땐 방문 처리를 잘 합시다