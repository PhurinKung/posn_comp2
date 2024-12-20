#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int dp[n+2][m+2]={};

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        {
            cin >> dp[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        {
            if(i==1 && j!=1) {
                dp[i][j]+=dp[i][j-1];
                continue;
            }
            else if(j==1){
                dp[i][j]+=dp[i-1][j];
                continue;
            }

            else {
                int t = min(dp[i-1][j],dp[i][j-1]);
            dp[i][j] += min(t,dp[i-1][j-1]);
            }
        }
    }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << dp[n][m];
}