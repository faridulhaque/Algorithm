#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int parent_size[N];

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parent_size[i] = 1;
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
        if (parent_size[lead_a] > parent_size[lead_b])
        {
            parent[lead_b] = lead_a;
        }
        else
        {
            parent[lead_a] = lead_b;
        }
    }
}


int main()
{
   
    int n, e;
    cin >> n >> e;

    dsu_set(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        dsu_union(a, b);
    }

    map<int, bool> mp;
    for(int i = 1; i <= n; i++){
        int ldr = dsu_find(i);
        mp[ldr] = true;
    }

    vector <int> v;



    for(pair <int, bool> p : mp){
        v.push_back(p.first);
    }

    for(int value : v){
        cout<<value;
    }
    return 0;
}