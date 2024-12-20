#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,pair<int,int>>

// kruskal
// หาedgesที่สั้นที่สุด แล้วเชื่อมให้หมดโดยไม่ทำให้เกิดcycle

int main(){
    int n;int w,u,v;
    cin >> n;int head[n+1];
    vector<pair<int,int>> tonmai[n+1];
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> w;
            pq.push({w,{i,j}});
            head[i] = i;
        }
    }//tonmai[u].push_back({w,v});

    int sum=0;
    while(!pq.empty()) {
        w = pq.top().first;
        u = pq.top().second.first;
        v = pq.top().second.second;
        pq.pop();

        while(head[u]!=u) u = head[u];
        while(head[v]!=v) v = head[v];
        if(u==v) continue;
        
        sum+=w;
        if(u<v) head[v]=u;
        else head[u]=v;

    }
    
    cout << sum;
        
}