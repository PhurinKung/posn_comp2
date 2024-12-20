#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a, m;
        cin >> a >> m;
        vector<tuple<int,int,int>> vec;
        for(int i=0;i<m;i++){
            int u,v,w; cin >> u >> v >> w;
            vec.push_back(make_tuple(w,u,v));
        }
        vector<long long> distance(a, INT_MAX);
        distance[0] = 0;
        for(int i=0;i<a-1;i++){
            for(auto x:vec){
                int w,u,v;
                tie(w,u,v) = x;
                distance[v] = min(distance[v],distance[u]+w);
            }
        }
        bool cycle = false;
        for(auto x:vec){
            int w,u,v;
            tie(w,u,v) = x;
            if(distance[v] > distance[u]+w) cycle = true;
            }

        if(cycle) cout << "possible" << endl;
        else cout << "not possible" << endl;
    }
    
}