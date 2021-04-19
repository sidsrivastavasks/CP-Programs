#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> v;
		for(ll i = 0; i<n; i++)
		{
			ll p;
			cin>>p;
			v.push_back(p);
		}
		ll p = 1; ll q = 0; ll r = 0;
		for(ll i = 1; i<n; i++)
		{
			if(v[i]>=v[0])
			{
				q = i;
				break;
			}
		}
		ll sum = v[0]+v[q];
		q++;int flag = 0;
		for(ll i = 0; i<n; i++)
		{
			if(v[i]>=sum)
			{
				r = i+1;
				flag = 1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<p<<" "<<q<<" "<<r<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
