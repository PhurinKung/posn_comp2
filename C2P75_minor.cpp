#include <bits/stdc++.h>
using namespace std;
map<set<int>,int> mp;

int main(){
    int n,a; cin >> n;
    int mx = -1;
    set<int> s;
    for(int i=0;i<n;i++) { 
        
        for(int j=0;j<5;j++)
        {
            cin >> a;
            s.insert(a);
        }
        mp[s]++;
        mx = max(mx,mp[s]);
        s.clear();
    }

    int sum=0;
    for(auto it: mp)
    {
        if(it.second==mx) sum+=mx;
    }
    cout << sum;
}