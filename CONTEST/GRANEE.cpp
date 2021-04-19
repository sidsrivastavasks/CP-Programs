#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,p=1,ans=1,k=0;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	while(k<n)
	{
		if(a[k]-p<=0)
		{
			p++;
			ans = p;
			k++;
		}
		else
		{
			p++;
			k++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
