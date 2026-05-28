#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> adj[101];
bool visited[101];

int main() {
    // bfs
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vertex, edge, src, dst;
    int result = 0;
    queue<int> q;

    cin >> vertex >> edge;

    for (int i = 0; i < edge; i++) {
        cin >> src >> dst;
        adj[src].push_back(dst);
        adj[dst].push_back(src);
    }

    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int cur_vertex = q.front();

        q.pop();

        for (const auto &i : adj[cur_vertex]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
                result++;
            }
        }
    }

    cout << result;

    return 0;
}

