#include <bits/stdc++.h>
using namespace std;

int move1[8]={-2,-1,1,2,-2,-1,1,2};
int move2[8]={1,2,2,1,-1,-2,-2,-1};
int best=1e6,n;
int x1,yy,x2,y2;

void DDD(int x, int y,int cnt){
    if(cnt>best||x>n||y>n||(x==x2 && y==y2)){
        if(x==x2 && y==y2) best = min(best,cnt);

        return;
    }
    
    for(int i=0;i<8;i++){
        DDD(x+move1[i],y+move2[i],cnt+1);
    }
}


int main(){
    cin >> n;
    cin >> x1 >> yy >> x2 >> y2;

    for(int i=0;i<8;i++){
        DDD(x1+move1[i],yy+move2[i],1);
    }

    cout << best;
    /*
    queue<pair<int,int>> q;
    q.push({x1,y1});

    int best=1e6, c=0;
    for(int i=0;i<8;i++)
    {
        int a = q.front().first;
        int b = q.front().second;
        c++;
        while(!q.empty())
        {
            
            q.pop();
            for(int j=0;j<8;j++)
            {
                if( a+move1[j]>=0||a+move1[j]<n||b+move2[j]>=0
                    ||b+move2[j]<n)  q.push({a+move1[j],b+move1[j]});
            }
            if(q.back().first==x2 && q.back().second==y2) 
            {
                break;
            }
        }
    }
    */
}