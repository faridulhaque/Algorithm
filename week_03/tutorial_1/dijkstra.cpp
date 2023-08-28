#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

vector<pii> adj[N];
vector<int> dist(N, INF);

vector<bool> visited(N);

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[source] = 0;
    pq.push({dist[source], source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;

        for (pii pr : adj[u])
        {
            int v = pr.first;
            int w = pr.second;

            if (visited[v])
                continue;

            if (dist[v] > dist[w] + 1)
            {
                dist[v] = dist[w] + 1;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;

        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dijkstra(1);

    for (int i = 1; i <= n; i++)
    {
        cout << dist[i];
    }

    return 0;
}