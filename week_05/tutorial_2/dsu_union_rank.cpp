#include <bits/stdc++.h>
using namespace std;

int parent[1000];
int parent_rank[1000];

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parent_rank[i] = 0;
    }
}

int dsu_find(int n)
{
    while (parent[n] == -1)
    {
        n = parent[n];
    }

    return n;
}

void dsu_union(int a, int b)
{
    int lead_a = dsu_find(a);
    int lead_b = dsu_find(b);
    if (lead_a != lead_b)
    {
        if (parent_rank[lead_a] > parent_rank[lead_b])
        {
            parent[lead_b] = lead_a;
        }
        else if (
            parent_rank[lead_b] > parent_rank[lead_a]

        )
        {
            parent[lead_a] = lead_b;
            
        }
        else
        {
            parent[lead_b] = lead_a;
            parent_rank[lead_a]++;
        }
    }
}

int main()
{
    // cout << find(4);
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        dsu_union(a, b);
    }

    return 0;
}