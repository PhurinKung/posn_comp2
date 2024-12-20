#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int head[n+2]={};
    map<int,int> tahan;
    for(int i=1;i<=n;i++){
        cin >> tahan[i];
        head[i]=i;
    }

    for(int i=1;i<=m;i++){
        int a, b;
        cin  >> a >> b;

        while(a!=head[a]) a = head[a];
        while(b!=head[b]) b = head[b];
        
        if(a==b) {
            cout << -1 << endl;
            continue;
        }

        if(tahan[a]>tahan[b]){
            tahan[a]+=tahan[b]/2;
            head[b] = a;
            cout << a <<endl;
        }
        else if(tahan[b]>tahan[a]){
            tahan[b]+=tahan[a]/2;
            head[a] = b;
            cout << b << endl;
        }
        else {
            if(a>b){
                tahan[b]+=tahan[a]/2;
                head[a] = b;
                cout << b << endl;
            }
            else {
                tahan[a]+=tahan[b]/2;
                head[b] = a;
                cout << a << endl;
            }
        }
    }

}