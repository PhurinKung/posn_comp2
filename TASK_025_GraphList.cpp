#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> adjL[n+1];

    for(int i=1;i<=m;i++){
        int a,b;
        cin >> a >> b;
        adjL[a].push_back(b);
        adjL[b].push_back(a);
    }
    

    for(int i=1;i<=n;i++) {
        sort(adjL[i].begin(),adjL[i].end());
        cout << i << " | ";
        for(auto x:adjL[i]) cout << x << " ";
        cout << endl;
    }
}