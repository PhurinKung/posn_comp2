#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int arr[n+1];
    //int dp[n+1][n+1]={};
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    while(m--){
        int a,b; cin >> a >> b;
        int ans=0;
        for(int i=a;i<=b;i++){
            ans+=arr[i];
        }
        cout << ans <<'\n';
    }
        
    }
    

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    
