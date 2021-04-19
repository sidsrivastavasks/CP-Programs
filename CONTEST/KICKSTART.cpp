#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	ll k = 1;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> v;
		ll len = 2;
		for(ll i =0; i<n; i++)
		{
			ll p;
			cin>>p;
			v.push_back(p);
		}
		ll count = 2;
		ll dif = v[0]-v[1];
		for(ll i = 1; i<n-1; i++)
		{
			if(v[i]-v[i+1]==dif)          //checking for non negative diffrence
			{
				count++;
				len = max(len,count);
			}
			else
			{
				
				count = 2;
				dif = v[i]-v[i+1];
			}
		}
		cout<<"Case #"<<k<<":"<<" "<<len<<"\n";
		k++;
	}
}
