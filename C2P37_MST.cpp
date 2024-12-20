#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    //prim's algoritihm
    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    cin >> n >> m;
    vector<pair<int,int>> adj[n+2];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({w,v});
        adj[v].push_back({w,u});
    }

    pq.push({0,1}); //nodeเริ่มต้น
    bool vis[n+1]={false};
    int w=0;
    while(!pq.empty()){
        int weight = pq.top().first;
        int node = pq.top().second;
        
        pq.pop();
        if(vis[node]) continue;
        vis[node] = 1; //ไม่ทำnodeซ้ำ
        w+=weight;
        for(auto i:adj[node]) //ทำจนครบทุกnode
        {
            if(!vis[i.second]) pq.push(i);
        }

    }
    cout << w;
}