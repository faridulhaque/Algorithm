#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u, int d)
{

    visited[u] = true;

    for (int v : adj[u])
    {

        if (visited[v])
            continue;
        depth[v] = depth[u] + 1;
        if (d == v)
        {
            cout << "Depth of "<< d << "= " << depth[v];
            break;
        }
        dfs(v, d);
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int d;
    cin >> d;

    dfs(1, d);

    return 0;
}