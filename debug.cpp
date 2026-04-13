#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <queue>

using namespace std;
using graph = vector<set<unsigned>>;

void dfs(const graph& g, const unsigned start) {
    stack<unsigned> stack;
    set<unsigned> visited;

    stack.push(start);

    while (!stack.empty())
    {
        auto current_vertex = stack.top();
        auto dst_vertex = g[current_vertex];

        stack.pop();
        
        if (visited.find(current_vertex) == visited.end())
        {
            visited.insert(current_vertex);
            cout << current_vertex << ' ';

            for (auto i = dst_vertex.rbegin(); i != dst_vertex.rend(); i++)
            {
                if (visited.find(*i) == visited.end())
                    stack.push(*i);
            }
        }
    }
}

void bfs(const graph& g, const unsigned start) {
    queue<unsigned> queue;
    set<unsigned> visited;

    queue.push(start);

    while (!queue.empty())
    {
        auto current_vertex = queue.front();
        auto dst_vertex = g[current_vertex];

        queue.pop();

        if (visited.find(current_vertex) == visited.end())
        {
            visited.insert(current_vertex);
            cout << current_vertex << ' ';

            for (auto i = dst_vertex.begin(); i != dst_vertex.end(); i++)
            {
                if (visited.find(*i) == visited.end())
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