#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
ll check(vector<ll>r,ll n)
{
	map<ll,ll>ch;
	for(ll i = 0; i<2*n; i++)
	{
		ch[r[i]]++;
	}
	for(auto itr = ch.begin(); itr!=ch.end(); ++itr)
	{
		if(itr->second%2!=0)
		{
			return false;
		}
	}
return true;	
}
void solve(vector<ll>a,vector<ll>b,ll n)
{
    	map<ll,ll> mp;
    	map<ll,ll> b1;
    	map<ll,ll>::iterator f ; 
    	vector<ll>v;
    	vector<ll>v1;
    	sort(a.begin(),a.end());
    	sort(b.begin(),b.end());
    	
    	for(ll i = 0; i<n; i++)
    	{
    		mp[a[i]]++;
    	}
    	for(ll j = 0; j<n; j++)
    	{
    		//cout<<itr->first<<" "<<itr->second<<endl;
    		f = mp.find(b[j]);
    		if(f==mp.end())
    		{
    			b1[b[j]]++;
    		}
    		else if(f->second>1)
    		{
    			mp[b[j]]--;
    		}
    		else
    		{
    			mp.erase(b[j]);
    		}
    		
    	}
		ll count = 0;
    	for(auto itr = mp.begin(); itr!=mp.end(); itr++)
    	{
    		count = itr->second/2;
    		while(count--)
    		{
    			v.pb(itr->first);
    		}
    	}
    	ll res = 0;
    	for(auto itr = b1.begin(); itr!=b1.end(); itr++)
    	{
    		res = itr->second/2;
    		while(res--)
    		{
    			v1.pb(itr->first);
    		}
    	}
    	ll cost = 0;
    	sort(v.begin(),v.end());
    	sort(v1.begin(),v1.end(),greater<ll>());
    	for(ll k = 0; k<v1.size(); k++ )
		{
			cost+= min(v1[k],v[k]);
	
		}
    cout<<cost<<endl;	
	
}
int main() 
{
    	ll n,t,p;
    	cin>>t;
    	while(t--)
    	{
    	 cin>>n;
    	 vector<ll>a;
    	 vector<ll>b;
    	 vector<ll>c;
    	for(int i = 0; i<n; i++)
    	{
    		cin>>p;
    		a.pb(p);
    		c.pb(p);
    	}
    	for(int i = 0; i<n; i++)
    	{
    		cin>>p;
    		b.pb(p);
    		c.pb(p);
    	}
    	if(check(c,n)==false)
    	{
    		cout<<"-1"<<endl;
    	}
    	else
    	{
    		solve(a,b,n);
    	}
    	}
    	return 0;
}
