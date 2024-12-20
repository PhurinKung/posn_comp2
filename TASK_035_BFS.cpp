#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> adjL[n+1];

    for(int i=0;i<m;i++){

        int u,v; cin >> u >> v;
        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }
    int a; cin >> a;
    queue<int> q;
    q.push(a);
    int vis[n+1]={0};

    while(!q.empty()) {
        int t = q.front();
        q.pop();
        if(vis[t]) continue;
        vis[t]= true;
        
        cout << t << " ";
        
        sort(adjL[t].begin(), adjL[t].end());
        for(auto x:adjL[t]){
            if(!vis[x]){
                q.push(x);
            }
        }
    }
}

//bfs
    /*queue<int> q;
    q.push(0);

    while(!q.empty()){
        u = q.front(); 
        q.pop();
        if(vis[u])continue;
        vis[u] = true;
        
        cout<<u<<" ";

        for(auto i : adj[u]){
            if(!vis[i]){
                q.push(i);
            }
        }
    }*/