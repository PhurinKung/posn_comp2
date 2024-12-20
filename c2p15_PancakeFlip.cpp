#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,q;
    cin >> p >> q;
    vector<int> pancake;
    int a;
    for(int i=0;i<p;i++)
    {
        cin >> a;
        pancake.push_back(a);
    }
    
    queue<int> flip;
    for(int i=0;i<q;i++){
        cin >> a;
        for(int i=0;i<p-a;i++){
            flip.push(pancake.back());
            pancake.pop_back();
        }
        
        while(!flip.empty()){
                pancake.push_back(flip.front());
                flip.pop();
        }
        //for(auto x:pancake) cout << x << " ";
        //cout << endl;
    }

    for(auto x:pancake) cout << x << " ";
}