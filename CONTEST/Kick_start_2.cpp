#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	ll test = 1;
	while(t--)
	{
		ll count = 1,n,k;
		cin>>n>>k;
		vector<pair<ll,ll> > v;
		for(ll i = 0; i<n; i++)
		{
			ll a,b;
			cin>>a>>b;
			v.push_back(make_pair(a,b));			
		}
		ll start = v[0].first;
		ll p = 0;
		while(p!=n)
		{
			if(start>v[p].second || start>v[p].first)
			{
				p++;
			}
			else
			{
				count++;
				if(v[p].first>=start)
				{
					start = v[p].first;
				}
				else if(v[p].second>=start)
				{
					start+=k;
				}
			}
		}
		cout<<"Case #"<<test<<":"<<" "<<count<<endl;
		test++;
	}	
}
