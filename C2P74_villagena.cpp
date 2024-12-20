#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s; //1 8 6 3 9 9 8 1 4 7 > 1 / 3 4 /6 7 8 9
    // 1 2 3 / 5  / 7 8
    int n,a;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a, s.insert(a);
    int cnt = 0;
    int temp=-100, highest = 0,mina , min, max;
    for(auto it=s.begin();it!=s.end();it++)
    {   
        if((*it)-1!=temp)
        {
            cnt = 0;
            mina= *it;
        }
        cnt++;
        if(cnt>highest)
        {
            highest = cnt;
            max=*it;
            min = mina;
        }
        //if((*it)-1==temp) max=*it;
        
        temp = *it;
    }
    cout << highest << endl << min << " " << max;
}

/*

*/