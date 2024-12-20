#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main(){
    string a,b; cin >> a >> b;


    for(int i=0;i<=(int)a.size();i++)
    {
        for(int j=0;j<=(int)b.size();j++)
        {   
            if(j==0){
                dp[i][j]= i;
                continue;
            }
            if(i==0){
                dp[i][j] = j;
                continue;
            }

            dp[i][j] = min(dp[i][j-1]+1,dp[i-1][j]+1);
            if(a[i-1]==b[j-1]) dp[i][j] = min(dp[i][j],dp[i-1][j-1]);
            else dp[i][j] = min(dp[i][j],dp[i-1][j-1]+1) ;
            
        }
    }
    cout << dp[a.size()][b.size()];
}