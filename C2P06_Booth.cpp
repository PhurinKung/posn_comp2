#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;

	int x;
  	priority_queue<int> a,b;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		a.push(x);
	}

	for(int i=0;i<m;i++)
	{
		cin >> x;
		b.push(x);
	}


	int profit = 0;
	for(int i=0;i<n;i++)
	{
		if(a.empty()||b.empty()) break;
		int t1=a.top();
		int t2=b.top();
		if(t1>t2) a.pop();
		else
		{
			profit+=b.top();
			a.pop();
			b.pop();
		}
	
		
	}
	cout << profit;
}