#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    int arr[n+2];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    int dp[n+2][n+2] = {0};
    int longest = 0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            int t;
            if(j==i) {dp[i][j] = 1;t = j;}
            if(arr[t]<arr[j+1]){
                dp[i][j+1]=dp[i][j]+1;
                t = j+1;
            }
            else dp[i][j+1] = dp[i][j];
        }
        longest = max(longest,dp[i][n]);
    }
    /*
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    */
    
    cout << longest;
}

/*
5
4 5 0 2 9
*/