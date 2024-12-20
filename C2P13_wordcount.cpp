#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	map<string,int> m;
	getline(cin, str);
	string a;

	for(int i=0;i<int(str.size());i++)
	{

		if(!ispunct(str[i]) && str[i]!=' ') a+=tolower(str[i]);

		if((str[i]==' '||i==int(str.size())-1)&&a.size())
		{

			if(!m[a]) m[a] = 1;
			else m[a]+=1;
			a.clear(); 
			continue;
		}
	}
	
	
	for(auto it=m.begin();it!=m.end();it++){
		cout << it->first << " " << it->second << endl;
	}
}