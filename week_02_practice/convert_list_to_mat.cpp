#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int adjMat[N][N];

vector<int> adj[N];

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }


    // convert

    for (int i = 1; i <= n; i++)
    {
        for (int j : adj[i])
        {
            adjMat[i][j] = 1;
        }

        cout << endl;
    }

    // print


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjMat[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}