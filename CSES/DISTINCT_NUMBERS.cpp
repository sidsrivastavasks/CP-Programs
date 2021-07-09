#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i = 0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll count = 1;
	for(ll i = 0; i<n-1; i++)
	{
		if(a[i+1]!=a[i])
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
