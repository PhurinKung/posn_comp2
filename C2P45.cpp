#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int a,b,c; cin >> a >> b >> c;
    long long dp[a+5][c+5]={};
    for(int ii=1 ; ii<=a ;ii++){
        for(int i=ii-1 ; i<= b*(ii-1) ;i++){
          for(int j=1 ; j<= b ;j++){
            if(i+j>c) continue;
            if(ii==1)dp[ii][i+j]=1;
            dp[ii][i+j]+=dp[ii-1][i];
           }
        }
    }
        cout << dp[a][c];
}