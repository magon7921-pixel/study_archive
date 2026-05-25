#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int x_pos[] = {1, 1, 1, 0, -1, -1, -1, 0};
int y_pos[] = {1, 0, -1, -1, -1, 0, 1, 1};

int search(vector<vector<int>> &v, const int r, const int c) {
    int result = 0;
    queue<pair<int, int>> q;
    vector<vector<int>> visited(r, vector<int>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (visited[i][j] == 0) {
                bool is_top = true;

                q.emplace(i, j);
                visited[i][j] = 1;

                while (!q.empty()) {
                    int cur_r = q.front().first;
                    int cur_c = q.front().second;
                    int cur_value = v[cur_r][cur_c];

                    for (int k = 0; k < 8; k++) {
                        int dr = x_pos[k] + cur_r;
                        int dc = y_pos[k] + cur_c;

                        if ((dr >= 0 && dr < r) && (dc >= 0 && dc < c)) {
                            int cmp_value = v[dr][dc];

                            if (cur_value == cmp_value && visited[dr][dc] == 0) {
                                q.emplace(dr, dc);
                                visited[dr][dc] = 1;
                            }
                            else if (cur_value < cmp_value)
                                is_top = false;
                        }
                    }

                    q.pop();
                }

                if (is_top)
                    result++;
            }
        }
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    int result = 0;
    cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> v[i][j];
        }
    }

    cout << search(v, r, c);
    
    return 0;
}

// 죄송합니다 코드가 좀 더럽죠
