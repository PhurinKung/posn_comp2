#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int adjmat[n+2][n+2]={0};
    for(int i=1;i<=m;i++){
        int v, u;
        cin >> v >> u;
        adjmat[v][u] = 1;
        adjmat[u][v] = 1;
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++){
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }
}