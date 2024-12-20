#include <bits/stdc++.h>
using namespace std;

typedef struct st{
    int rank, suit;
    char rr,ss;

    bool operator<(const st&rhs)
    {
        if(rank!=rhs.rank)
        {
            return rank < rhs.rank;
        }
        else{
            if(suit!=rhs.suit)
            {
                return suit<rhs.suit;
            }
        }
    }
}str;

int main(){
    int n;
    cin >> n;
    str aaa[n];
    char r, s;
    int rt, st;
    for(int i=0;i<n;i++)
    {
        cin >> r >> s;
        if(r=='T') rt = 10;
        else if(r=='J') rt = 11;
        else if(r=='Q') rt = 12;
        else if(r=='K') rt = 13;
        else if(r=='A') rt = 14;
        else if(r=='2') rt = 15;
        else rt = r-48;

        if(s=='C') st =1;
        else if(s=='D') st = 2;
        else if(s=='H') st = 3;
        else if(s=='S')st = 4;

        aaa[i] = {rt,st,r,s};
    }

    sort(aaa,aaa+n);

    for(int i=0;i<n;i++){
        cout << aaa[i].rr << " " << aaa[i].ss<< endl;
    }
}