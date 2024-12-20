#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }

    long long ans[n*2]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i+j]+=a[i]*b[j];
        }
    }
    for(int i=0;i<(n*2)-1;i++){
        cout << ans[i] << endl;
    }
}

/*
-2 1 / 2 1 = -4 0 1
*/