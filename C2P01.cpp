#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a;

	b=a[0];
	
	for(int i=1;i<int(a.length());i++)
	{
		bool check = 0;
		for(int j=0;j<int(b.length());j++)
		{
			if(a[i]<=b[j])
				{
					b[j]=a[i];
					check = 1;
					break;
				}
		}
		if(!check) b+=a[i];
	}
	cout << b.length();
}