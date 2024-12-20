#include <bits/stdc++.h>
using namespace std;


int main(){
    int q, p;
    
    cin >> q >> p;
    while(q--){
        vector<int> pancake; int arr[p+1];
        int cnt = 0;
        for(int i=0;i<p;i++)
        {
            int a; cin >> a;
            arr[i]=a;
            pancake.push_back(a);
        }
        sort(arr,arr+p,greater<int>());
        for(int k=0;k<p;k++) {
            int mx= arr[k];
            if(pancake[k]==mx) continue;

            //find index max *sigh*
            int index;
            for(int i=k;i<p;i++){
                if(pancake[i]==mx) index = ++i;
            }

            if(pancake[p-1]==mx){
                reverse(pancake.begin()+k, pancake.end());
                cnt++;
            }
            else {
                reverse(pancake.begin()+k, pancake.begin()+index);
                //reverse(pancake.begin()+k, pancake.end());
                cnt++;
            }

            //for(auto x:pancake) cout << x << " ";
            //cout << " /" << k << " " << index << endl;
        }
        cout << cnt << endl; 
    }    
        
}
/*
1 4
3 1 4 2
*/
