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
		queue<pair<ll, ll> > myq;
		ll n,x;
		cin>>n>>x;
		for(ll i = 1; i<=n; i++)
    	{
        	ll a;
        	cin>>a;
        	myq.push(make_pair(a,i));
    	}
		cout<<"Case #"<<k<<":"<<" ";
    	while(!myq.empty())
    	{
        	if(myq.front().first<=x)
        	{
            	cout<<myq.front().second<<" ";
            	myq.pop();
        	}
        	else
        	{
        		pair<ll,ll> myp = myq.front();
            	myp.first = (myp.first)-(x);
            	myq.pop();
            	myq.push(myp);
        	}
    	}
    	k++;
    	cout<<endl;
	}
    return 0;
}

