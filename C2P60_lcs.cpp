#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main(){
    string a,b;
    cin >> a >> b;
    //มองเป็นตาราง
    //ไม่เหมือนดูmaxซ้ายกับบน อักษรเหมือนดูmaxซ้ายกับบน และทแยงซ้ายบน
    for(int i=1;i<=a.size();i++) //string a แนวนอนนนนน
    {
        for(int j=1;j<=b.size();j++) //string b แนวตั้งง
        {
            dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            if(a[i-1]==b[j-1]){
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1); //อักษรเหมือน ๆ ๆ ๆ
            }
        }
    }
    cout << dp[a.size()][b.size()];
}