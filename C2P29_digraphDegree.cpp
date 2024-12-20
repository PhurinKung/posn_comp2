#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int in[n+1]={0};
    int out[n+1] ={0};
    vector<int> adjL[n+1];
    for(int i=1;i<=m;i++){
        int v, u;
        cin >> u >> v;
        in[v]++;
        out[u]++;
        adjL[u].push_back(v);
    }

    for(int i=1;i<=n;i++) {
        cout << i;
        for(auto x:adjL[i]) cout << "->" << x;
        cout << endl;
    
    }

    for(int i=1;i<=n;i++) {
        cout << in[i] << " " << out[i] << endl;
    }
}