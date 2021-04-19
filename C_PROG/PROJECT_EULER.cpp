#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll n)
{
	ll count = 0;
	ll k = 0;
	for(ll i = 1; i<=1e9; i++)
	{
		k = i*(i+1)/2;
		count = 0;
		for(ll j = 1; j<=sqrt(k); j++)
		{
			if(k%j==0)
			{
				count+=2;
			}
		}
		if(sqrt(k)*sqrt(k)==k)
		{
			count--;
		}
		if(count>n)
		{
			break;
		}
	}
	return k;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<check(n)<<endl;	
		
	}
	return 0;
}
