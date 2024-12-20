#include <bits/stdc++.h>
using namespace std;


struct student{
    int id, project;
    double point;

    bool operator<(student&rhs){
        if(point!=rhs.point) return point > rhs.point;
        else if(project!=rhs.project) return project < rhs.project;
        else return id < rhs.id;
    }
};


int main(){
    int n, m, k, h;
    cin >> n >> m >> k >> h;
    student nukrian[n];
    //vector<pair<int,pair<int,int>>> stu[n];
    for(int i=0;i<n;i++){
        priority_queue<int> pq;
        int id,ngan;
        cin >> nukrian[i].id >> ngan;
        nukrian[i].project = ngan;
        for(int j=0;j<ngan;j++){
            int t; cin >> t;
            pq.push(t);
        }
        double sum = 0, cnt = 0;
        for(int d=0;d<k;d++){
            if(!pq.empty()) {
                sum+= pq.top();
                pq.pop();
                cnt++;
            }
        }
        nukrian[i].point = sum/cnt;
    }

    sort(nukrian, nukrian+n);
    for(int i=0;i<h;i++){
        cout << nukrian[i].id<<endl;
        if(i==h-1) {
            while(nukrian[i].point==nukrian[i+1].point
                && nukrian[i].project==nukrian[i+1].project){
                    cout << nukrian[i+1].id << endl;
                    i++;
                }
        }
    }
}
/*
10 3 1 2
0 1 15
1 1 85
2 3 20 85 13
3 1 70
4 1 82
5 1 84
6 1 65
7 2 75 85
8 1 84
9 3 24 32 45


*/