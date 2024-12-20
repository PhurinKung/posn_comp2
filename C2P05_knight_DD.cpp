#include <bits/stdc++.h>
using namespace std;

int move1[8]={-2,-1,1,2,-2,-1,1,2};
int move2[8]={1,2,2,1,-1,-2,-2,-1};
bool visited[21][21];
int dt[21][21];

int main(){
    int n,x,y,x2,y2;
    queue<pair<int,int>> q;
    cin >> n;
    cin >> x >> y >> x2 >> y2;
    q.push({x,y});
    visited[x][y]=true;
    dt[x][y]=0;
    
    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        if( a==x2 && b==y2){
            cout << dt[a][b];
            return 0;
        }
        for(int i = 0; i < 8;i++){
            if(a+move1[i] > n|| a+move1[i]<0) continue;
            if(b+move2[i] > n|| b+move2[i]<0) continue;
            if(!visited[a+move1[i]][b+move2[i]]) {
                q.push({a+move1[i],b+move2[i]});
                visited[a+move1[i]][b+move2[i]] = true;
                dt[a+move1[i]][b+move2[i]] = dt[a][b]+1;
            }
        }
    }

    return 0;
}