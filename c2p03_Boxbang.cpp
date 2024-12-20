#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;

    int box[n+2]={0};
    for(int i=1;i<=n;i++)
    {
        cin >> box[i];
    }

    int no,h,w;
    for(int i=1;i<=q;i++)
    {
        cin >> w >> no;
        if(w!=4) cin >> h;

        if(w==1)
        {
            if(box[no]<h) box[no]++;
        }
        else if(w==2)
        {
            if(box[no]>=h) box[no]--;
        }
        else if(w==3)
        {
            if(h-1<=box[no]){
            
            for(int k=1;k<=3;k++)
            {
                if(box[no-1]>=h-1) box[no-1]--;
                if(box[no]>=h-1) box[no]--;
                if(box[no+1]>=h-1) box[no+1]--;
            }
            }
        }
        else
        {
            for(int k=1;k<=n;k++)
            {
                if(box[k]>=no) box[k]--;
            }
        }

        for(int i=1;i<=n;i++)
        {
            cout << box[i] << " ";
        }
        cout << endl;
    }

    
}