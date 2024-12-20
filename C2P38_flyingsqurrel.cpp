#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s,t;
    cin >> n >> s >> t;
    vector<int> adjl[n+1];
    map<int,int> hight;
    for(int i=0;i<n;i++) {
        int a,h,temp;
        cin >> a >> h >> temp;
        hight[a] = h;
        while(temp--) {
            int b; cin >> b;
            adjl[a].push_back(b);
        }
    }
    
    //use dijkstra to find shortest path kub
    priority_queue<pair<int,int> ,vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> distance(n,2e9);

    distance[s] = 0;
    pq.push({0,s});
    while(!pq.empty()){
        int u = pq.top().second;
        int w = pq.top().first;
        pq.pop();
        
        if(w > distance[u]) continue; //lazy deletion
        for(auto x:adjl[u]) {
            if(hight[u] > hight[x] &&  w + (hight[u]-hight[x]) < distance[x]) {
                distance[x] = w + (hight[u] - hight[x]);
                pq.push({distance[x],x});
            }
        }
    }
    
    if(distance[t]==2e9) cout << -1;
    else cout << distance[t];
}
    // vector<int> plant[n];
    // map<int,int> hight;
    // for(int i=0;i<n;i++) {
    //     int a,h;
    //     cin >> a >> h;
    //     hight[a] = h;
    //     int temp; cin >> temp;
    //     while(temp--) {
    //         int b; cin >> b;
    //         plant[a].push_back(b);
    //     }
    // }

    // vector<pair<int,int>> adjl[2001]={};
    // for(int i=0;i<n;i++) {
    //     for(auto u:plant[i]) {
    //         if(hight[i]>hight[u]) adjl[i].push_back({u,hight[i]-hight[u]});
    //     }
    // }


