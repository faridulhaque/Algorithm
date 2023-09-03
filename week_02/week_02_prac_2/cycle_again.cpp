#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
bool visited[N];
vector<int> adj[N];

bool dfs(int s, int p = -1)
{
    visited[s] = true;

    bool isCycle = false;

    for (int v : adj[s])
    {
        if (v == p)
            continue;
        if (visited[v]) 
            return true;
        isCycle = isCycle || dfs(v, s);    
    }

    return isCycle;
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool isCycle = dfs(1);
    
    if(isCycle) cout << "Yes";
    else cout << "No";

    return 0;
}
