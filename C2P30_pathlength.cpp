#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int adjMat[n+2][n+2]={0};
    for(int i=1;i<=m;i++) {
        int u,v; cin >> u >> v;
        adjMat[u][v]=1;
        adjMat[v][u]=1;
    }
    vector<int> DDD;
    while(1){
        int a;
        cin >> a;
        if(a==-1) break;

        DDD.push_back(a);
    }

    int ck[DDD.size()]={0};
    bool cycle =0;
    int last, length;
    ck[DDD[0]]++;
    for(int i=1;i<DDD.size();i++){
        if(adjMat[DDD[i-1]][DDD[i]]!=1){
            last = DDD[i-1];
            length = i-1;
            break;
        }
        if(adjMat[DDD[i-1]][DDD[i]]==1) {
            ck[DDD[i]]++;
            if(ck[DDD[i]]==2) cycle = 1;
        }
        last = DDD[i];length = i; //ไม่มีการตัด แบบมันจนถึงท้ายได้อะ
    }
    
    cout << DDD[0] << " " << last << " " << length;
    if(cycle) cout << " YES";
    else cout << " NO";

}