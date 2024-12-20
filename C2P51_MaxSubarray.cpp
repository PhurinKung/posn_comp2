#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a;
    long long keb[n+1]={0};
    long long mx=0;
    for(int i=1;i<=n;i++){
        cin >> a;
        keb[i] = max(keb[i-1]+a, a); //เก็บค่าผลรวมไปเรื่อย ๆ เทียบแล้วเลือกอันที่เยอะ
        mx = max(keb[i], mx); //เทียบค่าสูงสุดของสายใหม่กับสายที่ผ่านมา
    }
    cout << mx;
}

/*
-65 2 -2 11 3

14
*/