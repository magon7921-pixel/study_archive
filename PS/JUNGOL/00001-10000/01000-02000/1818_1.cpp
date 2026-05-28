#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> adj[101];
bool visited[101];

int main() {
    // dfs
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vertex, edge, src, dst;
    int result = 0;
    stack<int> stk;

    cin >> vertex >> edge;

    for (int i = 0; i < edge; i++) {
        cin >> src >> dst;
        adj[src].push_back(dst);
        adj[dst].push_back(src);
    }

    stk.push(1);
    visited[1] = true;

    while (!stk.empty()) {
        int cur_vertex = stk.top();

        stk.pop();

        for (const auto &i : adj[cur_vertex]) {
            if (!visited[i]) {
                visited[i] = true;
                stk.push(i);
                result++;
            }
        }
    }

    cout << result;

    return 0;
}

