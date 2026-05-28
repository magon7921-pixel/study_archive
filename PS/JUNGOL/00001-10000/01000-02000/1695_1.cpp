#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

int table[26][26];
int visited[26][26];
int di_vec[] = {-1, 1, 0, 0};
int dj_vec[] = {0, 0, -1, 1};

int dfs(int i_start, int j_start, int n) {
    stack<pair<int, int>> stk;
    int block_size = 1;

    stk.emplace(i_start, j_start);
    visited[i_start][j_start] = true;

    while (!stk.empty()) {
        int i = stk.top().first;
        int j = stk.top().second;

        stk.pop();

        for (int k = 0; k < 4; k++) {
            int di = i + di_vec[k];
            int dj = j + dj_vec[k];

            if (di > 0 && 
                dj > 0 && 
                di <= n && 
                dj <= n &&
                table[di][dj] == 1 && 
                !visited[di][dj]) {

                visited[di][dj] = true;
                ++block_size;
                stk.emplace(di, dj);
            }
        }
    }

    return block_size;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int block_cnt = 0;
    vector<int> block_size;
    string line;
    
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> line;
        
        for (int j = 1; j <= n; j++)
            table[i][j] = line[j - 1] - '0';
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (table[i][j] == 1 && !visited[i][j]) {
                block_size.push_back(dfs(i, j, n));
                ++block_cnt;
            }
        }
    }

    cout << block_cnt << '\n';

    sort(block_size.begin(), block_size.end());

    for (const auto &size: block_size)
        cout << size << '\n';
    
    return 0;
}
