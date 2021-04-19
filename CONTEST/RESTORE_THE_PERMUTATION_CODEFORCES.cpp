#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[2*n];
		int p[n];
		vector <int> v;
		map<int,int> mp;
		map<int,int>::iterator f ; 
		for(int i = 0; i<2*n; i++)
		{
			cin>>a[i];
		}
		mp.insert({a[0],0});
		v.push_back(a[0]);
		for(int i = 1; i<2*n; i++)
		{
			f = mp.find(a[i]);
			if(f==mp.end())
			{
				mp.insert({a[i],0});
				v.push_back(a[i]);
			}
			else
			{
				continue;
			}
		}
		for(int i = 0; i<v.size(); i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
