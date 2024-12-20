#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int in[n+1]={0};
    vector<int> adjL[n+1];
    for(int i=1;i<=m;i++){
        int v, u;
        cin >> u >> v;
        in[v]++;
        adjL[u].push_back(v);
    }
    
    for(int i=1;i<=n;i++) {
        cout << in[i] << " " << adjL[i].size() << endl;
    }
}