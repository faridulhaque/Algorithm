#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

vector<int> adj_list[];

int adj_mat[N][N];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
    }

    for (int i = 1; i <= m; i++)
    {
        for (int item : adj_list[i])
        {
            adj_mat[i][item] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << adj_mat[i][j];
        }

        cout << endl;
    }
    return 0;
}