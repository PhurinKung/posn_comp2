#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n+1];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    long long mx = 0;
    long long sum= 0; 
    for(int i=0;i<n;i++)
    {
        
        for(int j=i;j<n;j++){
            sum+=arr[j];
            mx=max(mx,sum);
        }
        sum = 0;
    }

    //โอ้ย ๆ ๆ คิดไว้แล้วว่าต้องโดนtime limit
    // int mx = 0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     {   
    //         int sum = 0;
    //         for(int k=i;k<=j;k++)
    //         {
    //             sum+=arr[k];
    //         }
    //         mx = max(mx,sum);
    //     }
        
    // }
    cout << mx;
}

/*
8
-2 1 -3 4 -1 2 1 -5


*/