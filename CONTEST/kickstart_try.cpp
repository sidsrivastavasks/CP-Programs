#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t,k=1;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		vector<pair<ll,ll> > v;
		for(ll i= 1; i<=n; i++)
		{
			ll a;
			cin>>a;
			v.push_back(make_pair(a,i));
		}
		ll ptr1 = 1,ptr2 = n,i=1; 
		cout<<"Case #"<<k<<":"<<" ";
		while(ptr1<=ptr2)
		{
			if(v[i].first>x)
			{
				v[i].first-=x;
				ptr2++;
				v[ptr2].first = v[i].first;
				v[ptr2].second = v[i].second;
				ptr1++;
				i++;
			}
			else
			{
				cout<<v[i].second<<" ";
				ptr1++;
			}
		}
		cout<<"\n";
		k++;
	}
}
