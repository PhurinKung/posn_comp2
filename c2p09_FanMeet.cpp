#include <bits/stdc++.h>
using namespace std;

struct crycryla{
    int f,value,index;

    bool operator<(const crycryla&rhs){
        if(f!=rhs.f) return f > rhs.f;
        else if(f==rhs.f) return index < rhs.index;
    }
};

int main(){
    for(int i=0;i<5;i++){
        int n,c,cnt=0;
        cin >> n >> c;
        struct crycryla st[c];
        map<int,int> mp; //value,frequnce for count frequence kub

        int t;
        for(int i=0;i<n;i++){
            cin >> t;
            if(!mp[t]){
                mp[t] = 1;
                st[cnt].value = t;
                st[cnt].index = i+1;
                cnt++;
            }
            else mp[t]++;
        }

        for(int i=0;i<cnt;i++){
            st[i].f=mp[st[i].value];
        }

        sort(st,st+cnt);

    // bool compareCCL(const crycryla&lhs, const crycryla&rhs){
    //     if(f!=rhs.f) return lhs.f > rhs.f;
    //     else if(f==rhs.f) return index < rhs.index;
    // }
        
        for(int i=0;i<mp.size();i++)
        {
            for(int j=0;j<st[i].f;j++){
                cout << st[i].value << " ";
            }
        }
        cout << endl;
    }

    
}

    //cout << endl;
    //for(int i=0;i<c;i++){
    //    cout << st[i].value << " " << st[i].f << " " << st[i].index << endl;
    //}

/*
9 3
1 3 3 3 2 2 2 1 1
5 2
2 1 2 1 2
3 3
1 2 3
3 4
3 3 4
5 5
1 5 5 5 2
*/