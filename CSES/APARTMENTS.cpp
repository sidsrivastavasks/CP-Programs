#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	vector<ll> numapp;
	for(ll i = 0; i<n; i++)
	{
		ll val;
		cin>>val;
		numapp.push_back(val);
	}	
	vector<ll> numapt;
	for(ll i = 0; i<m; i++)
	{
		ll val;
		cin>>val;
		numapt.push_back(val);
	}
	sort(numapt.begin(),numapt.end());
	vector<ll>::iterator lower,upper;	
	ll count = 0;
	for(ll i = 0; i<n; i++)
	{
		lower = lower_bound(numapt.begin(),numapt.end(),numapp[i]);
		upper = upper_bound(numapt.begin(),numapt.end(),numapp[i]);
		if(abs(numapt[lower-numapt.begin()]-numapp[i])<=k || abs(numapt[upper-numapt.begin()]-numapp[i])<=k)
		{
			count++;
		}
		//cout<<lower-numapt.begin()<<" "<<upper-numapt.begin()<<endl;
	}
	cout<<count;
	return 0;
}
