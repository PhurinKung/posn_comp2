#include <bits/stdc++.h>
using namespace std;
bool visited[100001];
vector<int> adjL[100001];

void dfs(int s){
    cout << s << " ";
    visited[s] = 1;

    sort(adjL[s].begin(),adjL[s].end());
    for(auto x:adjL[s]){
        if(visited[x]==0)
            dfs(x);
    }
    return;
}


int main(){
    int n,m;
    cin >> n >> m;
    int u,v; 
    for(int i=1;i<=m;i++){
        cin >> u >> v;
        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }

    int s; cin >> s;
    dfs(s);
    
    return 0;
}