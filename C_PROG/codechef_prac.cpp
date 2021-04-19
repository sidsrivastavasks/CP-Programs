#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		string ans = "";
		for(ll i = 0; i<n; i++)
		{
			ll a;
			cin>>a;
			if(a%k==0)
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
	cout<<ans<<"\n";
	}
	return 0;
}
