#include <bits/stdc++.h>
using namespace std;


int main(){
	queue<pair<int,int>> il;
	int n;
	cin >> n;
	int a[n+2][n+2]={0};

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >> a[i][j];
		}
	}

	bool check[n+1][n+1]={0};
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1 && !check[i][j])
			{
				ans++;
				il.push({i,j});
				check[i][j] = 1;

				while(!il.empty())
				{
					int x = il.front().first;
					int y = il.front().second;
					il.pop();
					for(int k=x-1;k<=x+1;k++)
					{
						for(int l=y-1;l<=y+1;l++)
						{
							if(a[k][l]==1&&!check[k][l]){
								il.push({k,l});
								check[k][l] = 1;
							}
						}
					}
				}
			}

		}
	}

	cout << ans;

}
