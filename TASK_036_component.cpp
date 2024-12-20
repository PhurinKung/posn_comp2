#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> adjL[n+2];
    for(int i=0;i<m;i++){
        int u,v; cin >> u >> v;
        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }

    bool vis[n+2] = {false};
    queue<int> q;
    
    
    int component = 0;
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        q.push(i);
        vis[i] = true;
        component++;
        
        while(!q.empty()){
        int u = q.front();
        q.pop();
        
        for(auto x:adjL[u]){
            if(!vis[x]){
                vis[x]=true;
                q.push(x);
            }
        }
    }
    }
    
    cout << component;
}