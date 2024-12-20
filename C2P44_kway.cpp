#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long dp[52]={0};
    dp[0]=1; dp[1] = 1;dp[2]=1; dp[3] = 2; dp[4] = 4 ;
    for(int i=5;i<=n;i++) {
        dp[i] = dp[i-1] + dp[i-3] + dp[i-4];
    }
    cout << dp[n];
}
/*
1: 1 /1
2: 1+1 /1
3: 1+1+1 3 /2
4: 1+1+1+1 3+1 1+3 4/3
5: 1+1+1+1+1 3+1+1 1+1+3 1+3+1 4+1 1+4 /6

1,3,5
111 3
4/ 1111 31 13
5/ 11111 311 113 131 5
*/