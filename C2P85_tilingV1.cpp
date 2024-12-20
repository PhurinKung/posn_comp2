#include<bits/stdc++.h>

using namespace std;

long long int dp[91],m;

/*long long int solve(int i){
    if(i==0) return 1;
    if(i<0) return 0;
    return dp[i] = solve(i-1) + solve(i-m);
}*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n>>m;

    dp[0]=1;
    for(int i = 1 ; i <= n ; i++){
        dp[i] = dp[i-1];
        if(i-m>=0) dp[i]+=dp[i-m];
    }

    cout<<dp[n];


    return 0;
}