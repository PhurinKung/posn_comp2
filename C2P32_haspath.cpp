#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m ;
    cin >> n >> m;
    int u, v;
    vector<int> adjL[n+1];
    int adjM[n+1][n+1] = {0};
    for(int i=0;i<m;i++){
        cin >> u >> v;
        adjL[u].push_back(v);
        adjM[u][v] = 1;

    }


    int a,b;
    cin >> a >> b;

    for(int i=1;i<=n;i++){
        cout << i;
        sort(adjL[i].begin(),adjL[i].end());
        for(auto x:adjL[i]) cout << "->" << x;
        cout << endl;
    }

    queue<int> s;
    int vis[n+1]={0};
    int haspath = 0;
    s.push(a); vis[a] = true;
    while(!s.empty()){
        u = s.front(); s.pop();
        if(u==b) haspath = 1;
        for(auto i : adjL[u]){
            if(!vis[i]){
                s.push(i);
                vis[i]=true;
            }
        }
    }

    
    if(haspath) cout << "Yes";
    else cout << "No";
}

/*
5 6
1 2 1 3 2 4 3 4 3 5 4 5
1 5

5 6
1 2 1 3 2 4 3 4 3 5 4 5
2 3
*/