#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll int n,i;
	cin>>n;
	ll int count = 1;
	ll int a[n];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=1; i<=n; i++)
	{
		if(a[i]!=a[i+1])
		{
			count++;
		}
	}
	cout<<count;
}
