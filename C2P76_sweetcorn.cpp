#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a;
    priority_queue<int, vector<int> ,greater<int>> c;
    
    for(int i=0;i<n;i++){
        cin >> a;

        if(c.size()<k) c.push(a);
        else if(c.top()<a){
            c.pop();
            c.push(a);
        }
        
        cout << c.top()<<endl;
    }

}