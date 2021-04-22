#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+7;
ll highestPower(ll n, ll k)
{
	ll x = n;
   	for (int i = 0;i<k-1;i++)
    {
        x*= n;
        x%= mod;
    }
   return x;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{   
		ll n,k;
		cin>>n>>k;
		ll ans=highestPower(n,k);
		cout<<ans<<endl;
	}
}

