#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int b;
        cin >> b;
        pq.push(b);
    }
    
    long long ans = 0;
    while(n-=2>=0){
        int sum=0;
        sum+=pq.top();
        pq.pop(); 
        sum+=pq.top();
        pq.pop();
        ans+=sum;
        pq.push(sum);
        //cout << pq.top() << " " << sum << " " << ans << endl;
    }
    cout << ans;
}

/*
1 2 3
1+2 / (3) + 3 -> (3)+(6)  

2 3 4 6 7 / 5 + 9 + 15 + 22 = 51 / 5 + 10 + 15 + 22
5 6 8 /
11 + 19 = 30 / 13 + 19 = 32

int sum=pq.top();
    pq.pop();
    int ans = 0;
    while(--n){
        cout << pq.top()
        sum+=pq.top();
        pq.pop();
        pq.push(sum);
        ans += sum;
        cout << pq.top() << " " << sum << " " << ans << endl;
    }
*/