#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<pair<int,string>, vector<pair<int,string>>, greater<pair<int,string>>> pq;
    map<string, int> mp;
    int n, k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        string a; int b;
        cin >> a >> b;
        pq.push({b,a});
        mp[a]=b;
    }

    for(int i=0;i<k;i++){
        int c = pq.top().first;
        string d = pq.top().second;
        cout << c << " " << d<<endl;
        pq.pop();
        pq.push({c+mp[d],d});
    }


}