#include <iostream>
#include <vector>
#include <stack>

using namespace std;
using graph = vector<vector<int>>;

int dfs(const graph &g) {
    unsigned start = 1;
    int visit_sum = -1;
    vector<bool> visited(g.size(), false);
    stack<unsigned> stack;

    stack.push(start);

    while(!stack.empty())
    {
        const auto current_vertex = stack.top();
        const auto& dst_vertex = g[current_vertex];

        stack.pop();

        if (!visited[current_vertex]) 
        {
            visited[current_vertex] = true;
            visit_sum++;

            for (int next_vertex: dst_vertex)
            {
                if (!visited[next_vertex])
                {
                    stack.push(next_vertex);
                }
            }
        }
    }

    return visit_sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int v, e;
    unsigned v1, v2;
    cin >> v >> e;
    graph g(v + 1);

    for (int i = 0; i < e; i++) {
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    cout << dfs(g);
    
    return 0;
}