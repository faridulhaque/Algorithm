#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

// for unweighted
// vector<int> adj[N];

// for weighted
vector<pair<int,int>> adj[N];

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        // for directed only
        adj[u].push_back({v, w});

        // for undirected 

        // adj[u].push_back(v);
        // adj[v].push_back(u);

        // for weighted
        int u, v, w;
        // cin >> u >> v >> w;
    }


    // print

    // this print is for weighted

    for (int i = 1; i <= n; i++)
    {
        for (auto j : adj[i])
        {
            cout << j.first << " ";
        }

        cout << endl;
    }

    return 0;
}