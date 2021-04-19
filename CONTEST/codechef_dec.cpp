#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll closepow(ll x)
{
	ll power = 1;
	while(power*2 <= x)
    	power*=2;
    return power;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll a[n];
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		ll i = 0;
		ll k = 1;
		while(x-- && i!=n-1)
		{
			
			if(a[i]==0 && i!=n-2)
			{
				i++;x++;
			}
			else
			{
				ll p = closepow(a[i]);
				a[i] = a[i]^p;
				a[i+1] = a[i+1]^p;	
			/**	for(int i = 0; i<n; i++)
				{
					cout<<a[i]<<" ";
				}
				cout<<endl;**/
			}		
		}
		//cout<<i<<" "<<x<<endl;
		if(x>=0)
		{
			if(x%2!=0)
			{
				ll p = closepow(a[i]);
				a[i] = a[i]^p;
				a[i+1] = a[i+1]^p;
				k = k+x;	
			}
		}
		for(int j = 0; j<n; j++)	
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
return 0;	
}
