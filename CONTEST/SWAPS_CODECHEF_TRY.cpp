#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll check(vector<ll>a,ll n)
{
	map<int, int>fr;
	//cout<<n<<endl;
	sort(a.begin(),a.end());
	for(ll i =0; i<n; i++)
	{
		fr[a[i]]++;
	}
	for(auto itr = fr.begin(); itr!=fr.end();itr++)
	{
		if(itr->second%2!=0)
		{
			return false;
		}
	}
return true;	
}
vector<ll> removenum(vector<ll>a,ll k)
{
	map<int, int>fr;
	vector<ll> v;
	ll res;
	//cout<<n<<endl;
	sort(a.begin(),a.end());
	for(ll i =0; i<k; i++)
	{
		fr[a[i]]++;
	}
	for(auto itr = fr.begin(); itr!=fr.end();itr++)
	{
		if(itr->second%2==0)
		{
			res = itr->second/2;
			while(res--)
			{
				v.pb(itr->first);
			}
		}
		else if(itr->second%2!=0 && itr->second>1)
		{
			res = itr->second;
			while(res--)
			{
				v.pb(itr->first);
			}
		}
	}
	return v;
}
ll solve(vector<ll>a,vector<ll>b,ll n)
{
	vector<ll> p;
	vector<ll> q;
	p = removenum(a,n);
	q = removenum(b,n);
	ll cost = 0;
	for(ll i = 0; i<p.size(); i++)
	{
		cost+= min(p[i],q[i]);
	}
	//cout<<cost<<endl;
	return cost;
}
int main()
{
	ll t,n,p,q;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<ll>a;
		vector<ll>b;
		vector<ll>c;
		for(ll i = 0; i<n; i++)
		{
			cin>>p;
			a.pb(p);
			c.pb(p);
		}
		for(ll i = 0; i<n; i++)
		{
			cin>>q;
			a.pb(q);
			c.pb(q);
		}
		ll k = c.size();
		if(check(c,k)==false)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			ll k = solve(a,b,n);
			cout<<k<<endl;
		}
		
	}
	return 0;
}
