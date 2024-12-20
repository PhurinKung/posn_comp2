#include <bits/stdc++.h>
using namespace std;

int main(){
    long arr[50+1];
    int n;
    cin >> n >> arr[0]>> arr[1];

    for(int i=2;i<=n;i++){
        arr[i] = arr[i-2] + arr[i-1];
    }
    cout << arr[n];
}