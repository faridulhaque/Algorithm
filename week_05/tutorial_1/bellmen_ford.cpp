#include <bits/stdc++.h>
using namespace std;

class edge
{
public:
    int u, v, w;
    edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{

    int n, e;
    cin >> n >> e;
    vector<edge> v;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;

        edge ed(a, b, w);
        v.push_back(ed);
    }

    int dist[n + 1];

    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[1] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;

            if (dist[a] + w < dist[b])
            {
                dist[b] = dist[a] + w;
            }
        }
    }

    return 0;
}