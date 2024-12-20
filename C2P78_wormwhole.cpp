#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a, m;
        cin >> a >> m;
        vector<pair<int,int>> vec[a+1];
        for(int i=0;i<m;i++){
            int u,v,w; cin >> u >> v >> w;
            vec[u].push_back({v,w});
        }
        vector<int> distance(a, 10000);
        distance[0] = 0;
        for(int i=0; i<a-1;i++){
            for(int j=0;j<a;j++){
                for(auto u:vec[i]){ // i equal u
                    //u.first = v, u.second = w
                    distance[u.first] = min(distance[u.first], distance[j]+u.second);
                } 
            }
        }
        bool cycle = false;
        for(int i=0; i<a;i++){
            for(auto u:vec[i]){
                if(distance[u.first] > distance[i]+u.second) cycle = true;
            }
        }

        if(cycle) cout << "possible" << endl;
        else cout << "not possible" << endl;
    }
    
}