#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,z;
    cin >> a >> b >> c;

    for(int x=-100;x<100;x++)
    {
        for(int y=-100;y<100;y++){
            z = a - y - x;
            if(x+y+z==a && x*y*z==b && x*x+y*y+z*z==c && (x!=y && x!=z&& y!=z)) {
                cout << x << " " << y << " " << z;
                return 0;
            }
        }
    } cout << "No solution.";
}