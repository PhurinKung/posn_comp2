#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int sum = 0;
	cin >> n;
	int h[n+1];

	for(int i=0;i<n;i++)
	{
		cin >> h[i];
		sum+=h[i];
	}

	int move=0;
	for(int i=0;i<n;i++)
	{
		if(h[i]>sum/n) move+=h[i]-(sum/n);
	}

	cout << move;
}