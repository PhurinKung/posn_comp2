#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,q;
    cin >> n >> m >> q;
    int a[n+1],b[m+1];
    set<int> ans;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(q==2) ans.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }
    
    if(q==0) //u
    {
        for(int i=0;i<n;i++)
        {
            ans.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            ans.insert(b[i]);
        }
    }
    else if(q==1) //in
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i]==b[j]) ans.insert(b[j]);
            }
        }
    }
    else if(q==2){
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i]==b[j]) ans.erase(a[i]);
            }
        }
    }

    for(auto it = ans.begin() ; it!=ans.end();it++)
    {
        cout << *it << " ";
    }
}