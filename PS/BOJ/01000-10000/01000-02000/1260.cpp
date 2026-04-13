#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <queue>

using namespace std;
using graph = vector<set<unsigned>>;

void dfs(const graph& g, const unsigned start) {
    stack<unsigned> stack;
    vector<bool> visited(g.size(), false);

    stack.push(start);

    while (!stack.empty())
    {
        const auto current_vertex = stack.top();
        const auto& dst_vertex = g[current_vertex];

        stack.pop();
        
        if (!visited[current_vertex])
        {
            visited[current_vertex] = true;
            cout << current_vertex << ' ';

            for (auto i = dst_vertex.rbegin(); i != dst_vertex.rend(); i++)
            {
                if (!visited[*i])
                    stack.push(*i);
            }
        }
    }
}

void bfs(const graph& g, const unsigned start) {
    queue<unsigned> queue;
    vector<bool> visited(g.size(), false);

    queue.push(start);

    while (!queue.empty())
    {
        const auto current_vertex = queue.front();
        const auto& dst_vertex = g[current_vertex];

        queue.pop();

        if (!visited[current_vertex])
        {
            visited[current_vertex] = true;
            cout << current_vertex << ' ';

            for (auto i = dst_vertex.begin(); i != dst_vertex.end(); i++)
            {
                if (!visited[*i])
                    queue.push(*i);
            }
        }
    }
}

int main() {
    unsigned v, e, start;
    unsigned v1, v2;
    cin >> v >> e >> start;
    graph g(v + 1);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        g[v1].insert(v2);
        g[v2].insert(v1);
    }

    dfs(g, start);
    cout << '\n';
    bfs(g, start);

    return 0;
}