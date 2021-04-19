#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		ll max = INT_MAX;
		cin>>n>>k;
		ll count=0;
		for(ll i = 0; i<n; i++)
		{
			ll r;
			cin>>r;
			if(k%r==0 && k/r<max)
			{
				max = k/2;
			}
			else
			{
				count++;
			}
		}
		if(count!=n)
		{cout<<max<<endl;}
		else
		{cout<<"-1"<<endl;}
	}
}
