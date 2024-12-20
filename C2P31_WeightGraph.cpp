#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int adjmat[n+1][n+1]={0};
    for(int i=0;i<m;i++){
        int a,b,w; cin >> a >> b >> w;
        adjmat[a][b] = w;
        adjmat[b][a] = w;
    }

    vector<int> vec;
    while(1){
        int t; cin >> t;
        if(t==-1) break;
        vec.push_back(t);
    }

    int sum = 0; 
    int pathlength=0;
    int ck[vec.size()+1] = {0};
    bool cycle = 0;
    ck[vec[0]]++;
    for(int i=1;i<int(vec.size());i++){
        if(adjmat[vec[i-1]][vec[i]]==0) {
            break;
        }
        else {
            ck[vec[i]]++;
            sum+=adjmat[vec[i-1]][vec[i]];
        }
        pathlength++;
        if(ck[vec[i]]==2) 
        {
            cycle = 1;
            break;
        }
    }
    cout << pathlength << " " << sum ;
}