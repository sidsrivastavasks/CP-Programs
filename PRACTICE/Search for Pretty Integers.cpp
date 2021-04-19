#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i = 0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i = 0; i<m; i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			if(a[i]==b[j])
			{
				cout<<a[i];
				return 0;
			}
		}
	}
	cout<<min(a[0],b[0])<<max(a[0],b[0]);
	return 0;
}
