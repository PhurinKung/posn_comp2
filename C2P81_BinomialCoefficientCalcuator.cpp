#include <bits/stdc++.h>
using namespace std;

int main(){
    long long dp[51][51]={0};
    int n, k;
    cin >> n >> k;
        for(int i=0;i<=n;i++) {
            for(int j=0;j<=k;j++){
            if(j==0||j==i) {
                dp[i][j]=1;
            }
            else dp[i][j]= dp[i-1][j-1] + dp[i-1][j];
            }
        }
    cout << dp[n][k];
}

/*
2 1
c1 0+c1 1 = 2

3 2
c(2,1) + c(2,2)
(c(1,0)+c(1,1)) + 1 = 3

1 3
c(0,2)+c(0,1)

*/