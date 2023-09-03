#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];

stack<int> st;

void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    

    while(!q.empty()){
        int u = q.front();
        st.push(u);
        for(int neigh : adj[u]){
            if(visited[neigh]) continue;
            q.push(neigh);
            visited[neigh] = true;
        

        }
        q.pop();
    }
    
}


int main()
{
    int n, m;
    cin>>n>>m;

    for(int i = 1; i <= m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    bfs(1);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}