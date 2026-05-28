#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int table[1000][1000];
int di_vec[] = {-1, 1, 0, 0};
int dj_vec[] = {0, 0, -1, 1};

int bfs(int h, int w) {
    queue<pair<int, int>> q;
    int max_depth = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> table[i][j];
            if (table[i][j] == 1)
                q.emplace(i, j);
        }
    }

    while(!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;

        for (int k = 0; k < 4; k++) {
            int di = i + di_vec[k];
            int dj = j + dj_vec[k];

            if (di >= 0 && dj >= 0 && di < h && dj < w && table[di][dj] == 0) {
                table[di][dj] = table[i][j] + 1;
                q.emplace(di, dj);
            }
        }

        if (max_depth < table[i][j] - 1)
            max_depth = table[i][j] - 1;

        q.pop();
    }

    return max_depth;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, w;
    int max_depth;
    
    cin >> w >> h;

    max_depth = bfs(h, w);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (table[i][j] == 0) {
                cout << -1;
                return 0;
            }
        }
    }
    
    cout << max_depth;

    return 0;
}
