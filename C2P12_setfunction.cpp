#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,q;
    cin >> n >> m >> q;
    set<int> a,b;
    int x,y;
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        a.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        cin >> y;
        b.insert(y);
    }
    
    if(q==0) //u
    {
        set_union(a.begin(),a.end(),b.begin(),b.end(),back_inserter(ans));
    }
    else if(q==1) //in
    {
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(ans));
    }
    else if(q==2){
        set_difference(a.begin(),a.end(),b.begin(),b.end(),back_inserter(ans));
    }

    for(auto it = ans.begin() ; it!=ans.end();it++)
    {
        cout << *it << " ";
    }
}