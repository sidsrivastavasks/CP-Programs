#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll closepoweroftwo(ll x)
{
	ll power = 1;
	while(power*2<= x)
    	power*=2;
    return power;
}
ll pos(ll a[],ll n,ll x,ll i)
{
		for(int k = i+1; k<n-1; k++)
		{
			ll temp = a[k]^x;
			if(temp < a[k])
			{
				return k;
			}
		}
		return (n-1);
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x,org;
		cin>>n>>x;
		ll a[n];
		for(int k = 0; k<n; k++)
		{	
			cin>>a[k];
		}
		ll i = 0,j = 1;
		ll temp = 0;
		for(ll move = x; move>0&&i<n-1; move--)	
		{

				ll p = closepoweroftwo(a[i]);
				j = pos(a,n,p,i);
				a[i] = a[i]^p;	
				a[j] = a[j]^p;
				org=move+1;
			while(a[i]<=0)
			{
				i++;
			}
			
		}
		//ll ptr1 = n-2,ptr2 = n-1;
		//cout<<x<<endl;
		if(org>0)
		{
			if(n<3 && org%2>0)
			{
				a[n-1] = a[n-1]^1;
				a[n-2] = a[n-2]^1;
			}
		}
		for(int k = 0; k<n; k++)	
		{
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
return 0;	
}
