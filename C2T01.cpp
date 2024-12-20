#include <iostream>
using namespace std;

int main(){
	int n,t;
	cin >> n;

	int sum = 0;
	for(int i=0;i<n;i++)
	{
		cin >> t;
		sum+=t;
	}

	if(sum%2!=0) sum+=1;
	cout << sum;
}